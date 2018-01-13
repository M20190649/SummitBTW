if("gl2ps_1_4_0" STREQUAL "")
  message(FATAL_ERROR "Tag for git checkout should not be empty.")
endif()

set(run 0)

if("/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps-stamp/gl2ps-gitinfo.txt" IS_NEWER_THAN "/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps-stamp/gl2ps-gitclone-lastrun.txt")
  set(run 1)
endif()

if(NOT run)
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps-stamp/gl2ps-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps'")
endif()

set(git_options)

# disable cert checking if explicitly told not to do it
set(tls_verify "")
if(NOT "x" STREQUAL "x" AND NOT tls_verify)
  list(APPEND git_options
    -c http.sslVerify=false)
endif()

set(git_clone_options)

set(git_shallow "")
if(git_shallow)
  list(APPEND git_clone_options --depth 1 --no-single-branch)
endif()

# try the clone 3 times incase there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git" ${git_options} clone ${git_clone_options} --origin "origin" "http://gitlab.onelab.info/gl2ps/gl2ps.git" "gl2ps"
    WORKING_DIRECTORY "/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'http://gitlab.onelab.info/gl2ps/gl2ps.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git" ${git_options} checkout gl2ps_1_4_0
  WORKING_DIRECTORY "/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'gl2ps_1_4_0'")
endif()

execute_process(
  COMMAND "/usr/bin/git" ${git_options} submodule init 
  WORKING_DIRECTORY "/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to init submodules in: '/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps'")
endif()

execute_process(
  COMMAND "/usr/bin/git" ${git_options} submodule update --recursive --init 
  WORKING_DIRECTORY "/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps-stamp/gl2ps-gitinfo.txt"
    "/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps-stamp/gl2ps-gitclone-lastrun.txt"
  WORKING_DIRECTORY "/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/media/gdor80/851a8b20-d038-4b5f-b834-0d9716e499c0/home/gdor80/Desktop/SummitBTW/sumo_tweaks/cmake-build-debug/gl2ps/src/gl2ps-stamp/gl2ps-gitclone-lastrun.txt'")
endif()

