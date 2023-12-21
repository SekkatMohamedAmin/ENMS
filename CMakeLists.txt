cmake_minimum_required(VERSION 3.10)
project(CrowSample)

# Assuming Boost is in the same directory as CMakeLists.txt
set(INCLUDE_PATHS "E:/ENMS/Website/include")

# Add the Boost headers directory with quotes
include_directories(${INCLUDE_PATHS} "E:/ENMS/Website/include")

# Add the executable with the source file
add_executable(CrowSample Website/main.cpp)