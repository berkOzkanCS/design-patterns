all: decorator.o main.o
	clang++ -g -o out main.cpp

decorator.o: decorator.cpp
	clang++ -std=c++17 -g -c decorator.cpp

run:
	./out
	make clear

clear:
	rm -rf *.dSYM *.o out