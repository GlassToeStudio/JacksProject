# #!/bin/bash
# make file for class Date
Project_10:  Project_10.o  Project_10_main.o
	g++   Project_10.o Project_10_main.o -o Project_10

Project_10.o: Project_10.cpp P10.h
	g++   -c  Project_10.cpp

Project_10_main.o:  P10.h  Project_10_main.cpp
	g++   -c  Project_10_main.cpp
clean:
	rm *.o Project_10

