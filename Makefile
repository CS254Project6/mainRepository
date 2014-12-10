all: compile

compile: main.o DataClass.o collectData.o DataParse.o DataOut.o #TextFormat.o
	  g++ main.o DataClass.o collectData.o DataParse.o DataOut.o -o execute #TextFormat.o -o execute

main.o: main.cpp
	g++ -c main.cpp

DataClass.o: DataClass.cpp DataClass.h
	g++ -c DataClass.cpp DataClass.h

collectData.o: DataClass.h DataClass.cpp
	g++ -c collectData.cpp

DataParse.o: DataClass.h DataClass.cpp DataOut.h DataOut.cpp
	g++ -c DataParse.cc

DataOut.o:
	g++ -c DataOut.cpp

#TextFormat.o: DataOut.cpp 
#	g++ -c TextFormat.cpp

clean: 
	rm -rf *.o execute
