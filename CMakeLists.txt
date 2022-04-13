cmake_minimum_required(VERSION 3.15 FATAL_ERROR) 

project(FindVulkan++)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/modules")

find_package(Vulkan MODULE)