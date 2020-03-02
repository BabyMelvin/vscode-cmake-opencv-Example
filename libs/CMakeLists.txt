# build shared library
add_library(lane_detection SHARED utils.cpp)
# set the version for shared library
SET_TARGET_PROPERTIES(lane_detection PROPERTIES VERSION 1.2 SOVERSION 1)

#build static library
add_library(lane_detection_static STATIC utils.cpp)

# find required opencv
find_package(OpenCV REQUIRED)
# directory of opencv headers
include_directories(${OpenCV_INCLUDE_DIRS})
# directory of opencv library
link_directories(${OpenCV_LIBRARY_DIRS})
# opencv libraries
target_link_libraries(lane_detection ${OpenCV_LIBS})
# target_link_libraries(lane_detection_static ${OpenCV_LIBS})

# install the shared library ${CMAKE_INSTALL_PREFIX}/libs
install(TARGETS lane_detection
    LIBRARY DESTINATION libs)

# install the static library ${CMAKE_INSTALL_PREFIX}/libs
install(TARGETS lane_detection_static
    ARCHIVE DESTINATION libs)

MESSAGE("test/libs CMAKE_CURRENT_SOURCE_DIR " ${CMAKE_CURRENT_SOURCE_DIR})
MESSAGE("test/libs project source dir " ${PROJECT_SOURCE_DIR})
MESSAGE("test/libs PROJECT_SOURCE_DIR " ${PROJECT_BINARY_DIR})

MESSAGE("opencv OpenCV_INCLUDE_DIRS " ${OpenCV_INCLUDE_DIRS})
MESSAGE("opencv OpenCV_LIBRARY_DIRS " ${OpenCV_LIBRARY_DIRS})
MESSAGE("opencv OpenCV_LIBS " ${OpenCV_LIBS})