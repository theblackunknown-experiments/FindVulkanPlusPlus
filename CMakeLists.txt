cmake_minimum_required(VERSION 3.15 FATAL_ERROR) 

project(FindVulkan++)

include(CTest)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/modules")

find_package(Vulkan MODULE)

add_executable(sample main.cpp)
target_link_libraries(sample
    PRIVATE
        Vulkan::Vulkan
        Vulkan::glslang
        Vulkan::shaderc
        Vulkan::SPIRV-Tools
)

add_test(NAME test_sample COMMAND sample)
