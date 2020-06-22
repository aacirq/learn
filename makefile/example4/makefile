CC = gcc

all: main_max main_min

main_max: main_max.c dep.o
	$(CC) main_max.c dep.o -o main_max

main_min: main_min.c foo.o 
	$(CC) main_min.c foo.o -o main_min

foo.o: foo.c 
	$(CC) -c foo.c

dep.o:
	$(CC) -c dep.c 

clean:
	rm *.o main_max main_min