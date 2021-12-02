main: main.o funcs.o
	g++ -o main main.o funcs.o
tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o
tests.o: tests.cpp funcs.h
	g++ -c tests.cpp
funcs.o: funcs.h funcs.cpp
	g++ -c funcs.cpp
main.o: main.cpp funcs.h
	g++ -c main.cpp
clean:
	rm -f tests.o main.o