cmake_minimum_required(VERSION 3.0)
project(PhysicsCmulation)

# Define the source files
aux_source_directory(PhysicsCmulation/src/ SRC_FILES)
aux_source_directory(PhysicsCmulation/physics/src/ PHYSICS_FILES)
aux_source_directory(PhysicsCmulation/shapes/src/ SHAPES_FILES)

# Concatenate the source files
set(SOURCES 
    main.cpp
    ${SRC_FILES}
    ${PHYSICS_FILES}
    ${SHAPES_FILES}
)

set(CMAKE_CXX_STANDARD 17) 

add_executable(PhysXCmulation.exe ${SOURCES})
