/****************************************************************************/
// Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.org/sumo
// Copyright (C) 2001-2018 German Aerospace Center (DLR) and others.
// This program and the accompanying materials
// are made available under the terms of the Eclipse Public License v2.0
// which accompanies this distribution, and is available at
// http://www.eclipse.org/legal/epl-v20.html
// SPDX-License-Identifier: EPL-2.0
/****************************************************************************/
/// @file    HelpersHBEFA.cpp
/// @author  Daniel Krajzewicz
/// @author  Jakob Erdmann
/// @author  Michael Behrisch
/// @date    Mon, 10.05.2004
/// @version $Id$
///
// Helper methods for HBEFA-based emission computation
/****************************************************************************/


// ===========================================================================
// included modules
// ===========================================================================
#ifdef _MSC_VER
#include <windows_config.h>
#else
#include <config.h>
#endif

#include <utils/common/ToString.h>
#include "HelpersHBEFA.h"


// ===========================================================================
// static definitions
// ===========================================================================
double
HelpersHBEFA::myFunctionParameter[42][36] = {
    // HDV; 3 clusters
    //  vehicle class#1/3
    { 4245.223, 154.6451, 1.927562, 541.2383, -4.550742, 0.04188938, 28.93721, 0.2037537, -0.003240476, 0.4930771, 0.008678762, -0.000121619, 13.32557, 0.01322119, 0.000700762, 0.095335, 0.001058381, -1.49E-05, 1337.078, 48.70711, 0.6071061, 170.4687, -1.433304, 0.01319348, 57.36627, 1.608585, -0.01356748, 5.374104, -0.04497662, 0.000340619, 4.261253, 0.02554976, 0.000149429, 0.03476595, 0.000966905, -8.29E-06 },
    //  vehicle class#2/3
    { 7532.393, 296.2907, 4.776591, 894.9408, -4.454462, 0.01506321, 64.0142, 0.4218208, -0.003186929, 0.7000011, 0.01569257, -0.000193357, 30.24542, 0.0187745, 0.002567214, -0.08659921, 0.008306071, -7.94E-05, 2372.407, 93.3199, 1.504438, 281.8711, -1.40298, 0.004744429, 61.59909, 4.076068, 0.02217579, 12.79584, -0.09531593, 0.0005145, 11.43318, 0.08889879, 0.001239571, 0.09093043, 0.003454929, -3.71E-05 },
    //  vehicle class#3/3
    { 4379.343, 326.7668, 5.13858, 1169.737, -10.36215, 0.05391863, 29.17327, 0.4384759, -0.02571725, 2.691101, -0.04257238, 0.000198563, 16.04012, 0.03122069, 0.00159475, 0.05119362, 0.003245125, -3.17E-05, 1262.193, 104.5547, 1.425356, 377.4979, -3.555124, 0.01910588, 89.55158, 3.046639, -0.01640881, 10.66656, -0.1096889, 0.00056675, 3.948798, 0.04236512, -0.000316063, 0.1628317, -0.001558937, 5.44E-06 },

    // HDV; 6 clusters
    //  vehicle class#1/6
    { 3829.748, 147.9749, 1.777084, 529.3666, -4.567272, 0.04292206, 24.49617, 0.2063578, -0.004779611, 0.6274923, 0.0059385, -0.000108111, 11.84365, 0.01288211, 0.000403278, 0.1121517, 0.0004725, -1.07E-05, 1206.22, 46.60628, 0.5597114, 166.7297, -1.438511, 0.01351872, 56.05184, 1.508194, -0.01516956, 5.135625, -0.04351839, 0.000334778, 3.190084, 0.02395894, -0.000195444, 0.05076006, 0.000514056, -5.33E-06 },
    //  vehicle class#2/6
    { 3727.514, 345.2813, 4.893428, 1096.787, -7.416957, 0.0280765, 23.77369, 0.4555801, -0.034993, 2.557392, -0.03645875, 0.000147667, 14.29555, 0.03184967, 0.00198025, 0.031253, 0.004242667, -4.20E-05, 1174.02, 108.75, 1.541237, 345.4448, -2.33605, 0.008842917, 77.83577, 3.005416, -0.030789, 10.1406, -0.09853533, 0.000451083, 2.518828, 0.03534608, -0.000696833, 0.1587361, -0.00135225, 2.25E-06 },
    //  vehicle class#3/6
    { 5537.632, 269.8361, 5.648917, 1380.937, -19.34676, 0.1321773, 43.83397, 0.3016793, 0.005988, 1.782886, -0.02033733, 6.80E-05, 15.04026, 0.044756, -0.000785667, 0.2291307, -0.001645333, 1.20E-05, 1318.267, 91.26118, 1.02786, 467.6024, -7.150377, 0.04931933, 138.8276, 2.776265, 0.01352733, 8.819582, -0.07310133, 0.000410333, 5.781037, 0.04107233, 0.000997667, 0.1459517, -0.000726, 3.67E-06 },
    //  vehicle class#4/6
    { 8985.25, 326.1776, 5.51268, 936.401, -3.526856, 0.004997833, 57.74254, 0.4314542, -0.01708467, 1.511672, -0.004765667, -7.15E-05, 26.43911, 0.006439667, 0.0025045, -0.1147438, 0.007911667, -7.13E-05, 2830, 102.7331, 1.736277, 294.9295, -1.110821, 0.001574167, 67.78939, 4.951368, 0.04244583, 14.74165, -0.09469333, 0.000439667, 10.07179, 0.1157227, -0.001297, 0.268713, -2.00E-04, -1.17E-05 },
    //  vehicle class#5/6
    { 8726.428, 275.3837, 6.54939, 1411.54, -18.75068, 0.129248, 49.98624, 0.643615, -0.009524, 7.020251, -0.182641, 0.001201, 39.97457, -0.016933, 0.00411, -0.24333, 0.005946, -3.90E-05, 2152.048, 94.09162, 1.227265, 491.8213, -7.398254, 0.051621, 82.31324, 4.352434, 0.066345, 22.51904, -0.353294, 0.002424, 15.61173, 0.130472, 0.000312, 0.262619, -0.006538, 4.90E-05 },
    //  vehicle class#6/6
    { 6523.294, 252.2728, 3.844317, 795.2882, -4.959638, 0.02617982, 65.1358, 0.3528321, 0.006897636, -0.01911436, 0.02942282, -0.000262364, 30.13205, 0.02454291, 0.002579182, -0.04914736, 0.007503273, -7.30E-05, 2054.581, 79.45602, 1.210808, 250.4845, -1.56209, 0.008245727, 59.21904, 3.089958, 0.003992818, 10.10062, -0.08431282, 0.000517455, 11.9726, 0.05959373, 0.002890182, -0.04753164, 0.005511, -4.79E-05 },

    // HDV; 12 clusters
    //  vehicle class#1/12
    { 3777.914, 169.7948, 3.01701, 543.2617, -3.400868, 0.0276416, 19.79026, 0.2745816, -0.0136666, 1.042812, -0.0014014, -9.20E-05, 9.638248, 0.0117292, 0.001148, 0.0133902, 0.0024412, -2.24E-05, 1189.894, 53.47867, 0.9502392, 171.106, -1.071139, 0.008706, 58.3618, 1.905507, -0.0215914, 6.81565, -0.0627068, 0.0003704, 2.117546, 0.025472, -0.0003838, 0.0913152, -0.0002838, -1.80E-06 },
    //  vehicle class#2/12
    { 1178.094, 98.07191, 0.6434853, 426.1617, -4.274885, 0.044156, 15.48074, 0.09682383, 0.000677833, 0.3069623, 0.0079665, -1.00E-04, 5.973097, 0.010058, 6.57E-05, 0.1382332, -0.001090833, 2.33E-06, 371.0531, 30.88879, 0.2026728, 134.2242, -1.346421, 0.01390733, 31.4823, 0.9752208, -0.001955667, 3.105738, -0.0124115, 0.0001845, 2.479061, 0.01418067, 7.65E-05, 0.03521683, 0.000487, -4.00E-06 },
    //  vehicle class#3/12
    { 6037.502, 199.516, 2.957913, 629.6518, -4.367862, 0.0330238, 52.84091, 0.207839, 0.0033912, -0.2037164, 0.023461, -0.0001992, 21.73357, 0.0174904, 0.0026086, -0.0220608, 0.0052594, -4.76E-05, 1901.576, 62.83969, 0.9316262, 198.3155, -1.375705, 0.0104012, 56.82231, 2.241451, -0.0022442, 7.06951, -0.0568268, 0.0003946, 10.51586, 0.0366152, 0.0022762, -0.064026, 0.00404, -3.06E-05 },
    //  vehicle class#4/12
    { 8346.313, 348.7957, 5.807692, 1002.669, -3.506569, -0.0024172, 57.5509, 0.4551868, -0.0191538, 1.673864, -0.0076502, -5.58E-05, 26.84843, 0.0092324, 0.002566, -0.1306032, 0.008825, -8.14E-05, 2628.76, 109.8569, 1.829195, 315.8013, -1.104431, -0.0007612, 57.11903, 5.282892, 0.0435782, 15.82654, -0.1004152, 0.000397, 9.997718, 0.1217238, -0.0013438, 0.2949876, -0.000472, -1.12E-05 },
    //  vehicle class#5/12
    { 3945.002, 329.6897, 4.977738, 1029.128, -6.415743, 0.0229038, 26.09977, 0.460142, -0.0298806, 2.09053, -0.0254042, 7.76E-05, 13.81196, 0.0336372, 0.0022038, 0.0607028, 0.0034944, -3.80E-05, 1242.52, 103.8393, 1.567791, 324.1347, -2.020706, 0.0072138, 77.98345, 3.659314, -0.0167726, 13.28484, -0.141909, 0.0008374, 2.076544, 0.0586858, -0.0011186, 0.1913528, -0.0018984, 7.80E-06 },
    //  vehicle class#6/12
    { 5146.604, 349.9846, 4.580544, 1128.035, -7.741384, 0.0275195, 58.78087, 0.4532422, -0.00607075, 0.731588, 0.00848925, -0.0001165, 27.23363, 0.046362, 0.0041685, -0.05372075, 0.00929775, -9.15E-05, 1620.978, 110.2314, 1.44269, 355.2865, -2.43823, 0.00866775, 49.73242, 3.702976, 0.010858, 12.32118, -0.1082213, 0.000542, 12.76151, 0.0733965, 0.003513, -0.006429, 0.00553575, -5.53E-05 },
    //  vehicle class#7/12
    { 2468.366, 107.175, -0.454992, 531.0585, -6.0537, 0.0568685, 43.43802, 0.304624, 0.0032445, 0.290372, 0.0214735, -0.000149, 27.72425, 0.0096335, -0.00146, 0.5241775, -0.005529, 4.00E-06, 777.4382, 33.75592, -0.1433045, 167.2625, -1.906677, 0.017911, 19.87989, 1.605028, -0.0052925, 6.956905, -0.070429, 0.000715, 7.821013, 0.05183, -0.0001675, -0.0195895, 0.003644, -2.20E-05 },
    //  vehicle class#8/12
    { 8158.499, 174.8699, 3.850001, 524.2941, -1.627882, 0.01411133, 84.22954, 0.4076163, 0.02642967, -0.7384697, 0.06290667, -0.000519667, 43.00436, 0.002628, 0.000444, -0.09107867, 0.0082, -8.30E-05, 2569.606, 55.07713, 1.212599, 165.132, -0.5127187, 0.004444667, 66.97121, 3.209013, 0.002880333, 10.74906, -0.08791767, 0.000667, 11.84367, 0.06905167, 0.002679333, -0.07983067, 0.007327667, -6.03E-05 },
    //  vehicle class#9/12
    { 8726.428, 275.3837, 6.54939, 1411.54, -18.75068, 0.129248, 49.98624, 0.643615, -0.009524, 7.020251, -0.182641, 0.001201, 39.97457, -0.016933, 0.00411, -0.24333, 0.005946, -3.90E-05, 2152.048, 94.09162, 1.227265, 491.8213, -7.398254, 0.051621, 82.31324, 4.352434, 0.066345, 22.51904, -0.353294, 0.002424, 15.61173, 0.130472, 0.000312, 0.262619, -0.006538, 4.90E-05 },
    //  vehicle class#10/12
    { 3572.165, 356.4182, 4.833206, 1145.116, -8.13211, 0.03177129, 22.1122, 0.4523216, -0.03864471, 2.890864, -0.04435486, 0.000197714, 14.64097, 0.03057286, 0.001820571, 0.01021743, 0.004777143, -4.49E-05, 1125.091, 112.2577, 1.522269, 360.6663, -2.561295, 0.01000657, 77.73029, 2.538346, -0.04080071, 7.894712, -0.06755414, 0.000175143, 2.834744, 0.01867486, -0.000395571, 0.1354384, -0.000962143, -1.71E-06 },
    //  vehicle class#11/12
    { 5537.632, 269.8361, 5.648917, 1380.937, -19.34676, 0.1321773, 43.83397, 0.3016793, 0.005988, 1.782886, -0.02033733, 6.80E-05, 15.04026, 0.044756, -0.000785667, 0.2291307, -0.001645333, 1.20E-05, 1318.267, 91.26118, 1.02786, 467.6024, -7.150377, 0.04931933, 138.8276, 2.776265, 0.01352733, 8.819582, -0.07310133, 0.000410333, 5.781037, 0.04107233, 0.000997667, 0.1459517, -0.000726, 3.67E-06 },
    //  vehicle class#12/12
    { 9345.47, 215.5508, 3.122979, 662.6306, -5.589131, 0.0536472, 37.07944, 0.2540546, -0.0062166, 0.8912752, 0.003296, -0.0001206, 16.58738, 0.0150562, 0.0007128, 0.019276, 0.002339, -1.48E-05, 2943.455, 67.89001, 0.983615, 208.7025, -1.760356, 0.0168968, 115.4133, 2.039132, -0.0205846, 5.871867, -0.0534446, 0.000368, 3.860352, 0.0345176, -0.000893, 0.0969626, -0.0004166, -1.00E-06 },


    // passenger & light delivery; 7 clusters
    //  vehicle class#1/7
    { 996.9682, 20.5008, 2.105255, 402.9621, -6.851369, 0.058854, 103.3263, 6.420582, -0.069665, 26.63126, -1.679889, 0.020307, 28.34217, 0.11478, 0.003321, 2.221844, -0.035114, 0.000203, 314.0057, 6.456945, 0.663072, 126.9172, -2.157912, 0.018537, -17.87872, 0.225347, 0.032447, 2.951223, -0.008134, 0.000136, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#2/7
    { 568.4164, 28.98654, 2.392379, 444.6236, -7.96483, 0.0713965, -30.73332, 2.72593, 0.1847705, 13.13587, -0.8342, 0.010139, 0.260599, 0.047499, 0.003201, 0.5008775, -0.017732, 0.000178, 179.0288, 9.12962, 0.753505, 140.0389, -2.508608, 0.0224875, -9.310931, 0.1564435, 0.025312, 1.814603, -0.039666, 0.0004675, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#3/7
    { 1555.28, 18.8412, 1.537082, 283.4023, -3.814485, 0.02828925, 92.07023, 1.368063, 0.047582, 1.272534, -0.1242364, 0.0018055, 12.88685, 0.02722013, 0.00503425, -0.09635513, 0.004566, -1.45E-05, 487.6871, 5.943571, 0.4862617, 89.2316, -1.20423, 0.008945125, -3.764286, 0.06886613, 0.01050787, 0.951383, -0.01077775, 0.00013075, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#4/7
    { 1638.562, 18.58688, 1.864623, 336.5175, -4.873515, 0.0352435, 200.8571, 2.721256, 0.0261325, -3.045024, 0.0110325, 0.0016485, 23.9455, 0.118374, 0.0010025, 1.515319, -0.01325, 5.10E-05, 516.0826, 5.854136, 0.587283, 105.9898, -1.534965, 0.0111, -18.26806, 0.194389, 0.027705, 3.746524, -0.0380975, 0.000291, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#5/7
    { -1003.894, 28.99975, 1.52799, 415.6817, -6.270028, 0.0435848, 2.427614, 0.0026388, 0.004946, 0.7214286, -0.0114684, 5.56E-05, 0.0985086, 0.006085, 5.60E-06, 0.1458242, -0.0024438, 1.10E-05, -316.1871, 9.133779, 0.4812568, 130.9234, -1.974812, 0.0137276, -2.200042, 0.0711052, 0.0060012, 1.097767, -0.0172668, 0.0001186, 0.3387628, 0.0045714, 0.0018894, 0.053204, -0.00066, 9.40E-06 },
    //  vehicle class#6/7
    { -1460.657, 38.54555, 2.587558, 550.0553, -9.270113, 0.073572, 2.30828, 0.00579875, 0.00612125, 1.01166, -0.02122225, 0.000138, -0.3680555, 0.00952975, 0.0002195, 0.3670983, -0.0078245, 4.23E-05, -460.0494, 12.14033, 0.814979, 173.2458, -2.919721, 0.023172, -5.03414, 0.114594, 0.01239625, 2.15876, -0.045757, 0.00037375, -0.5019018, 0.00714925, 0.00287175, 0.1692208, -0.003773, 3.75E-05 },
    //  vehicle class#7/7
    { 2166.094, 19.70297, 1.127945, 124.9567, -0.9551173, 0.013322, 22.93762, 0.3453138, 0.0340968, -1.141499, -0.0123665, 0.00048415, 1.257912, 0.0073757, 0.000494, -0.0051317, -0.00024665, 6.55E-06, 682.2344, 6.205661, 0.3552582, 39.35645, -0.3008244, 0.00419595, 3.022236, 0.0405486, 0.0033863, 0.2024628, -0.00173205, 3.28E-05, 0.07654135, 0.00089725, 0.00037255, 0.0085828, -7.94E-05, 1.50E-06 },


    // passenger & light delivery; 14 clusters
    //  vehicle class#1/14
    { 895.048, 28.01939, 2.268731, 353.5948, -6.013789, 0.060184, -78.42317, 2.252056, 0.204949, 11.88813, -0.729578, 0.00895, -0.198061, 0.029691, 0.001663, 0.228178, -0.009928, 0.00011, 281.9048, 8.825005, 0.714561, 111.3684, -1.894107, 0.018956, -0.840184, 0.128177, 0.022964, 0.090339, 0.006234, 0.00013, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#2/14
    { 996.9682, 20.5008, 2.105255, 402.9621, -6.851369, 0.058854, 103.3263, 6.420582, -0.069665, 26.63126, -1.679889, 0.020307, 28.34217, 0.11478, 0.003321, 2.221844, -0.035114, 0.000203, 314.0057, 6.456945, 0.663072, 126.9172, -2.157912, 0.018537, -17.87872, 0.225347, 0.032447, 2.951223, -0.008134, 0.000136, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#3/14
    { 241.7848, 29.95369, 2.516027, 535.6524, -9.915872, 0.082609, 16.95654, 3.199804, 0.164592, 14.38362, -0.938822, 0.011328, 0.719259, 0.065307, 0.004739, 0.773577, -0.025536, 0.000246, 76.1527, 9.434234, 0.792449, 168.7094, -3.123109, 0.026019, -17.78168, 0.18471, 0.02766, 3.538866, -0.085566, 0.000805, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#4/14
    { 1766.366, 28.86222, 1.009348, 179.9436, -1.995637, 0.021407, 9.519505, -0.0001735, 0.004417, 0.2940755, -0.003349, 7.50E-06, 2.614778, 0.008488, -4.90E-05, 0.0952845, -0.0017875, 7.50E-06, 556.3357, 9.090463, 0.3179045, 56.67517, -0.628547, 0.0067425, 11.64171, 0.092567, 0.004931, 0.1218405, 0.0027595, 1.85E-05, 0.477455, 0.002826, 0.001173, 0.01824, -0.000236, 5.00E-06 },
    //  vehicle class#5/14
    { -1460.657, 38.54555, 2.587558, 550.0553, -9.270113, 0.073572, 0.851137, 0.002138, 0.002257, 0.3730315, -0.0078255, 5.10E-05, -0.191191, 0.00495, 0.000114, 0.1906935, -0.0040645, 2.20E-05, -460.0494, 12.14033, 0.814979, 173.2458, -2.919721, 0.023172, -2.918474, 0.066434, 0.0071865, 1.251511, -0.026527, 0.0002165, -0.1795185, 0.002557, 0.001027, 0.0605265, -0.0013495, 1.35E-05 },
    //  vehicle class#6/14
    { -1460.657, 38.54555, 2.587558, 550.0553, -9.270113, 0.073572, 2.772362, 0.006964667, 0.007352, 1.215055, -0.025489, 0.000165667, -0.421911, 0.01092433, 0.000251667, 0.4208137, -0.008969333, 4.83E-05, -460.0494, 12.14033, 0.814979, 173.2458, -2.919721, 0.023172, -5.467097, 0.1244497, 0.01346233, 2.344422, -0.04969233, 0.000406, -0.5896773, 0.008399667, 0.003374, 0.198815, -0.004433, 4.40E-05 },
    //  vehicle class#7/14
    { 1524.712, 19.83281, 1.526236, 246.8718, -2.755203, 0.02236, 125.3404, 0.8948317, 0.082081, -4.478419, 0.01717675, 0.00072175, 15.07328, 0.028836, 0.00394, -0.469072, 0.00669525, -1.45E-05, 480.2241, 6.246555, 0.480704, 77.75491, -0.8677803, 0.0070425, -2.985925, 0.0615315, 0.0086275, 0.6688392, -0.01133175, 0.000145, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#8/14
    { 1315.659, 19.85449, 0.8501516, 125.5445, -1.234241, 0.01365757, 6.445969, -0.001671, 0.001951714, -0.021213, 0.001361143, -1.47E-05, 0.9530063, 0.003198571, -8.14E-06, 0.037985, -0.000763286, 3.57E-06, 414.3807, 6.253384, 0.2677641, 39.54159, -0.3887376, 0.004301714, 6.52896, 0.06100229, 0.003692571, 0.1800367, -0.000521571, 3.26E-05, 0.08227386, 0.001756143, 0.000729286, 0.01931086, -0.000159286, 2.86E-06 },
    //  vehicle class#9/14
    { 2389.721, 16.02631, 1.210326, 114.4709, -0.6800661, 0.01103857, 26.19008, 0.6217411, 0.05579343, -3.591721, 0.029783, 0.000538857, 1.040033, 0.010627, 0.000763571, -0.07915957, 0.001320571, 2.00E-06, 752.668, 5.047656, 0.3812051, 36.05382, -0.214194, 0.003476857, -0.4058774, 0.01190943, 0.002148571, 0.1531723, -0.002129143, 2.30E-05, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#10/14
    { -889.7033, 26.6133, 1.263098, 382.0882, -5.520007, 0.036088, 2.837958, 0.00280475, 0.00566125, 0.8156385, -0.01252825, 5.78E-05, 0.167109, 0.00646775, -1.93E-05, 0.1384215, -0.00212, 8.75E-06, -280.2215, 8.382141, 0.3978262, 120.3428, -1.738585, 0.0113665, -2.224633, 0.07692125, 0.00620775, 1.146896, -0.01680775, 0.00010925, 0.453569, 0.00528525, 0.0021895, 0.05635125, -0.0005985, 9.50E-06 },
    //  vehicle class#11/14
    { 1160.041, 15.96945, 1.472322, 264.6607, -3.900594, 0.0307155, 99.29707, 3.146305, -0.0568605, 8.132381, -0.382831, 0.004678, 19.00645, 0.037976, 0.0099855, 0.4603955, 0.0078325, -5.60E-05, 356.7081, 5.067087, 0.4722905, 83.24187, -1.239802, 0.0098145, -6.34454, 0.1020615, 0.0158925, 1.428825, -0.0007645, 6.80E-05, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#12/14
    { 1638.562, 18.58688, 1.864623, 336.5175, -4.873515, 0.0352435, 200.8571, 2.721256, 0.0261325, -3.045024, 0.0110325, 0.0016485, 23.9455, 0.118374, 0.0010025, 1.515319, -0.01325, 5.10E-05, 516.0826, 5.854136, 0.587283, 105.9898, -1.534965, 0.0111, -18.26806, 0.194389, 0.027705, 3.746524, -0.0380975, 0.000291, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#13/14
    { 4090.07, 23.34377, 1.661025, 94.17165, 0.1407857, 0.010964, 74.75966, 0.458661, 0.06031533, -2.345069, -0.02632067, 0.000755, 1.535461, 0.003798333, 0.000544, -0.06322367, 0.000545667, 2.67E-06, 1288.211, 7.352367, 0.5231577, 29.66036, 0.044342, 0.003453, -1.500043, 0.014919, 0.002562, 0.2383583, -0.002585, 2.33E-05, 0, 0, 0, 0, 0, 0 },
    //  vehicle class#14/14
    { 1868.198, 18.1992, 1.460284, 309.0113, -4.609052, 0.03110133, 7.862757, 0.7542397, 0.08466433, 6.912267, -0.2255383, 0.001978333, 2.053268, 0.01627633, 0.002533667, 0.1231153, -0.004271333, 4.10E-05, 588.409, 5.73203, 0.4599317, 97.32639, -1.45167, 0.009795667, -2.227221, 0.05712633, 0.009019333, 0.9453647, -0.01773867, 0.000163, 0, 0, 0, 0, 0, 0 }
};


// ===========================================================================
// method definitions
// ===========================================================================
HelpersHBEFA::HelpersHBEFA() : PollutantsInterface::Helper("HBEFA2") {
    myEmissionClassStrings.insert("zero", PollutantsInterface::ZERO_EMISSIONS);
    int clusterSizesH[] = {3, 6, 12};
    int clusterSizesP[] = {7, 14};
    int index = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < clusterSizesH[i]; j++) {
            myEmissionClassStrings.insert("HDV_" + toString(clusterSizesH[i]) + "_" + toString(j + 1), index | PollutantsInterface::HEAVY_BIT);
            myEmissionClassStrings.addAlias("hdv_" + toString(clusterSizesH[i]) + "_" + toString(j + 1), index | PollutantsInterface::HEAVY_BIT);
            index++;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < clusterSizesP[i]; j++) {
            myEmissionClassStrings.insert("P_" + toString(clusterSizesP[i]) + "_" + toString(j + 1), index);
            myEmissionClassStrings.addAlias("p_" + toString(clusterSizesP[i]) + "_" + toString(j + 1), index);
            index++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < clusterSizesH[i]; j++) {
            myEmissionClassStrings.insert("HDV_A0_" + toString(clusterSizesH[i]) + "_" + toString(j + 1), index | PollutantsInterface::HEAVY_BIT);
            myEmissionClassStrings.addAlias("hdv_a0_" + toString(clusterSizesH[i]) + "_" + toString(j + 1), index | PollutantsInterface::HEAVY_BIT);
            index++;
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < clusterSizesP[i]; j++) {
            myEmissionClassStrings.insert("P_A0_" + toString(clusterSizesP[i]) + "_" + toString(j + 1), index);
            myEmissionClassStrings.addAlias("p_a0_" + toString(clusterSizesP[i]) + "_" + toString(j + 1), index);
            index++;
        }
    }
    myEmissionClassStrings.addAlias("unknown", myEmissionClassStrings.get("P_7_7"));
}


/****************************************************************************/
