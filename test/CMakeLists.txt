# list all source files in "."
AUX_SOURCE_DIRECTORY(. SRC_LIST)
# build source to bin
ADD_EXECUTABLE(TestCase ${SRC_LIST})
# add the header search path
TARGET_INCLUDE_DIRECTORIES(TestCase PUBLIC ${PROJECT_SOURCE_DIR}/libs)
# add libs dependency
TARGET_LINK_LIBRARIES(TestCase PUBLIC lane_detection)