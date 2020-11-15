CC = gcc
FLAGS = -Wall -g
AR=ar

all: libmyMath.so libmyMath.a mains maind 

main.o: main.c basicMath.c power.c myMath.h
	$(CC) $(FLAGS) -c main.c 

mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

maind: main.o 
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
	
libmyMath.a: basicMath.o power.o
	$(AR) -rcs libmyMath.a basicMath.o power.o		

libmyMath.so: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
	
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

.PHONY: clean all

clean:
	rm -f mains maind *.a *.so *.o
				