# Install script for directory: /media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/src/microsim

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/microsim/actions/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/microsim/cfmodels/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/microsim/devices/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/microsim/lcmodels/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/microsim/output/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/microsim/pedestrians/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/microsim/traffic_lights/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/microsim/trigger/cmake_install.cmake")

endif()

