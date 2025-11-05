

all: main.o abstract-factory.o
	clang++ -g -o out main.cpp

factory.o: abstract-factory.cpp
	clang++ -g -c factory.cpp

run:
	./out

clear:
	rm -rf *.dSYM *.o out