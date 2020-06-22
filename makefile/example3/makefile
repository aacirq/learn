CC = gcc

main: main.c foo.o dep.o
	$(CC) main.c foo.o dep.o -o main

foo.o: foo.c 
	$(CC) -c foo.c

dep.o:
	$(CC) -c dep.c 

clean:
	rm *.o main