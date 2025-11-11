all: composite.o main.o
	clang++ -g -o out main.cpp

composite.o: composite.cpp
	clang++ -std=c++17 -g -c composite.cpp

run:
	./out
	make clear

clear:
	rm -rf *.dSYM *.o out