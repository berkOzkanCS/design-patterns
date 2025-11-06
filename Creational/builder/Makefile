

all: builder.o main.o
	clang++ -g -o out main.cpp

builder: builder.cpp
	clang++ -g -c builder.cpp

run:
	./out

clear:
	rm -rf *.dSYM *.o out