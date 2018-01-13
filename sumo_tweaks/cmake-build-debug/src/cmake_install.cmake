# Install script for directory: /media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/src

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
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/activitygen/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/dfrouter/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/duarouter/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/foreign/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/gui/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/guinetload/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/guisim/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/jtrrouter/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/libsumo/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/marouter/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/mesogui/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/mesosim/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/microsim/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/netbuild/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/netedit/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/netgen/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/netimport/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/netload/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/netwrite/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/od/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/osgview/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/polyconvert/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/router/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/tools/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/traci-server/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/traci_testclient/cmake_install.cmake")
  include("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/src/utils/cmake_install.cmake")

endif()

