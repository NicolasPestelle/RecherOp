project( SacADos )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )

add_executable( SacADos.out SacADos.cpp Objet.cpp Sac.cpp)
