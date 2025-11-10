all: bridge.o main.o
	clang++ -g -o out main.cpp

bridge.o: bridge.cpp
	clang++ -g -c bridge.cpp

run:
	./out
	make clear

clear:
	rm -rf *.dSYM *.o out