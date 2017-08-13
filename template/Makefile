all: c_program

main.o: main.c
	gcc -c -o main.o main.c

f1.o: f1.c
	gcc -c -o f1.o f1.c 

c_program: main.o f1.o
	gcc -o c_program main.o f1.o

clean:
	rm -f *.o c_program 
