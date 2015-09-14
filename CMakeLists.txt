cmake_minimum_required(VERSION 2.8)
project(ImageProc)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")
find_package(OpenCV REQUIRED)
if (NOT OpenCV_FOUND)
    message(SEND_ERROR "Mandatory package OpenCV not found, aborting build...")
endif (NOT OpenCV_FOUND)

find_package(CUDA REQUIRED)
if (NOT CUDA_FOUND)
    message(SEND_ERROR "Mandatory package CUDA not found, aborting build...")
endif (NOT CUDA_FOUND)

