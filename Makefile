all: compile

compile: main.o DataClass.o collectData.o DataParse.o DataClassHeader.o DataOut.o DataOutHeader.o
	  g++ main.o DataClass.o collectData.o DataParse.o DataClassHeader.o DataOut.o DataOutHeader.o-o execute data

main.o: main.cpp
	g++ -c main.cpp

DataClass.o: 
	g++ -c DataClass.cpp 

DataClassHeader.o:
	g++ -c DataClass.h

collectData.o:
	g++ -c collectData.cpp

DataParse.o:
	g++ -c DataParse.cpp

DataOut.o:
	g++ -c DataOut.cpp

DataOutHeader.o:
	g++ -c DataOut.h

clean: 
	rm -rf *o compile
