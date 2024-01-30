CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror

all: test main

clean:
	rm test main

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

main: mian.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main