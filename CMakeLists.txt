
project(Challenges)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fsanitize=undefined -fsanitize=address")

add_executable(NonDecreasingArray src/NonDecreasingArray/main.cpp src/NonDecreasingArray/NonDecreasingArray.hpp)
add_executable(FancySequence src/FancySequence/main.cpp)