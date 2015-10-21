cmake_minimum_required(VERSION 2.8)
project("Reality-cpp")
add_subdirectory(extlib/SFML)
if("${CMAKE_CXX_COMPILER_ID}" MATCHES "(GNU|.*Clang)") 
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11") 
endif() 

set(GAME_SRC
  Main.cpp
  FurnaceItem.cpp
  FurnaceBlock.cpp
)

set(GAME_INC
  Main.h
  FurnaceBlock.h
  FurnaceItem.h
)




if (FALSE)
set(JSON_CPP_SRC
  jsoncpp.h
  jsoncpp.cpp
  tokenizer.h
  tokenizer.cpp
  )
endif()
include_directories(extlib/SFML/include)
add_Executable(${PROJECT_NAME} ${GAME_SRC} ${GAME_INC})

target_link_libraries(
	${PROJECT_NAME}
	sfml-system
	sfml-window
	sfml-graphics
	)

