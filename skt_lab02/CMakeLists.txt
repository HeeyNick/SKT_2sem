cmake_minimum_required(VERSION 3.10)
project(SKT_Lab02)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wextra")

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3 -march=native -mtune=native -DNDEBUG")

set(SOURCES
    src/main.cpp
    src/point.cpp
    src/vector3.cpp
    src/direct.cpp
    src/inverse.cpp
)

set(HEADERS
    src/point.h
    src/vector3.h
    src/direct.h
    src/inverse.h
)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# find_package(OpenMP REQUIRED)
# if(OpenMP_CXX_FOUND)
#     target_link_libraries(${PROJECT_NAME} OpenMP::OpenMP_CXX)
# endif
