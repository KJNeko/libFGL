add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/fgl_cmake_modules)

AddFGLLibrary(libFGL STATIC ${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/include)