all:
	gcc main.c operation.c -o operation.exe
	./operation.exe

main.o: main.c
	gcc -c main.c

operation.o: operation.c
	gcc -c operation.c

test: main.o operation.o
	gcc main.o operation.o -o operation.exe
	./maintest.tcl ./operation.exe