all: singleton.o main.o
	clang++ -g -o out main.cpp

singleton.o: singleton.cpp
	clang++ -g -c singleton.cpp

run:
	./out
	make clear

clear:
	rm -rf *.dSYM *.o out