taskmgt: main.o task.o
	g++ -g -Wall -o ./dist/taskmgt ./build/main.o ./build/task.o

task.o:
	g++ -c -Wall -o ./build/task.o ./src/task.cpp

main.o:
	g++ -c -Wall -o ./build/main.o ./src/main.cpp
