all: prototype.o main.o
	clang++ -g -o out main.cpp

prototype.o: prototype.cpp
	clang++ -g -c prototype.cpp

run:
	./out
	make clear

clear:
	rm -rf *.dSYM *.o out