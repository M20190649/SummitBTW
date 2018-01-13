#!/usr/bin/env python
# Eclipse SUMO, Simulation of Urban MObility; see https://eclipse.org/sumo
# Copyright (C) 2009-2018 German Aerospace Center (DLR) and others.
# This program and the accompanying materials
# are made available under the terms of the Eclipse Public License v2.0
# which accompanies this distribution, and is available at
# http://www.eclipse.org/legal/epl-v20.html
# SPDX-License-Identifier: EPL-2.0

# @file    test.py
# @author  Pablo Alvarez Lopez
# @date    2016-11-25
# @version $Id$

# import common functions for netedit tests
import os
import sys

testRoot = os.path.join(os.environ.get('SUMO_HOME', '.'), 'tests')
neteditTestRoot = os.path.join(
    os.environ.get('TEXTTEST_HOME', testRoot), 'netedit')
sys.path.append(neteditTestRoot)
import neteditTestFunctions as netedit  # noqa

# Open netedit
neteditProcess, match = netedit.setupAndStart(neteditTestRoot)

# go to select mode
netedit.selectMode()

# select all using invert
netedit.selectionInvert()

# go to inspect mode
netedit.inspectMode()

# inspect vaporizers
netedit.leftClick(match, 310, 200)

# Set invalid begin
netedit.modifyAttribute(0, "-30")

# Set valid begin
netedit.modifyAttribute(0, "5")

# Set invalid end 1
netedit.modifyAttribute(1, "-5")

# Set invalid end 2
netedit.modifyAttribute(1, "1")

# Set valid begin
netedit.modifyAttribute(1, "15.8")

# save additionals
netedit.saveAdditionals()

# save newtork
netedit.saveNetwork()

# quit netedit
netedit.quit(neteditProcess)
