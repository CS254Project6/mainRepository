all: compile

compile: main.o DataClass.o collectData.o 
	  g++ main.o DataClass.o collectData.o -o execute

main.o: main.cpp
	g++ -c main.cpp

DataClass.o: DataClass.cpp
	g++ -c DataClass.cpp DataClass.h

collectData.o:
	g++ -c collectData.cpp

clean: 
	rm -rf *o compile
