all: Code2
Code2: main.o polas.a objetoscid.so
	g++ -o Code2 pola.o objetosci.o main.o
pola.o: pola.cpp
	g++ -c pola.cpp
objetosci.o: objetosci.cpp
	g++ -c objetosci.cpp	
main.o: main.cpp
	g++ -c main.cpp
polas.a: pola.o
	ar rc polas.a pola.o
	ranlib polas.a
objetoscid.so: objetosci.o
	g++ -shared -o objetoscid.so objetosci.o
clean:
	rm -f Code2 *.o *.a *.so
