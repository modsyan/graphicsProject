cmake_minimum_required(VERSION 3.9)

project(ZombieGame)

# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_VERBOSE_MAKEFILE ON)

# find_package(OpenGL)
# find_package(GLUT)
# aux_source_directory(. SRC_LIST)
# include_directories( ${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
# target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} ${IL_LIBRARIES})
# target_link_libraries(${PROJECT_NAME} ${IL_LIBRARIES})
# include_directories( ${GLUT_INCLUDE_DIRS})

file(GLOB helloworld_SRC
    "src/*.hpp"
    "*src/*.cpp"
)

add_executable(${PROJECT_NAME}
    ${helloworld_SRC}
    # src/main.cpp
    # src/keyControllers.cpp
    # src/meterial.cpp
    # src/player.cpp
    # src/screenUtils.cpp
    # src/screens.cpp
    )
target_link_libraries( 
    ${PROJECT_NAME}
    GL
    GLU
    ${IL_LIBRARIES}
    glut
)

if(UNIX) 
  set_target_properties(${PROJECT_NAME} PROPERTIES SUFFIX ".bin")
endif()

add_custom_target(run-ex1
  COMMAND ${PROJECT_NAME}
  DEPENDS ${PROJECT_NAME}
  WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)