cmake_minimum_required(VERSION 3.8)
project(Lec6)

set(CMAKE_CXX_STANDARD 11)

# Set files to compile
#set(SOURCE_FILES functions.cpp)
#set(SOURCE_FILES functionsReturn.cpp)
#set(SOURCE_FILES functionStruct.cpp)
#set(SOURCE_FILES Point.cpp)
set(SOURCE_FILES DaytonBaxterHw2_task1.cpp)

add_executable(Lec6 ${SOURCE_FILES})