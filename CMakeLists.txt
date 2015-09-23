cmake_minimum_required(VERSION 2.8)
project(ImageProc CXX)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")
message("Searching package OpenCV...")
find_package(OpenCV REQUIRED)
message("OpenCV VERSION: " ${OpenCV_VERSION} " FOUND")
if (NOT OpenCV_FOUND)
    message(SEND_ERROR "Mandatory package OpenCV not found, aborting build...")
endif (NOT OpenCV_FOUND)

if (NOT NO_CUDA)
    message("Searching package CUDA...")
    find_package(CUDA REQUIRED)
    message("CUDA VERSION: " ${CUDA_VERSION} " FOUND")
    if (NOT CUDA_FOUND)
    message(SEND_ERROR "Mandatory package CUDA not found, aborting build...")
    endif (NOT CUDA_FOUND)
endif (NOT NO_CUDA)

if (APPLE)
find_package(OpenCL QUIET)
message("OpenCL " ${OPENCL_FOUND})
message("OpenCL version " ${OPENCL_VERSION})
endif (APPLE)


