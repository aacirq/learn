CC = gcc

main: main.c foo.o
	$(CC) main.c foo.o -o main

foo.o: foo.c
	$(CC) -c foo.c

clean:
	rm *.o main