CC = gcc
CFLAGS = -std=c89 -Wall -Wextra -I include -v
AR = ar
ARFLAGS = rcs

all: main

main: main.o lib/libtermdraw.a
	$(CC) $(CFLAGS) -o main main.o -Llib -ltermdraw

main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c

lib/libtermdraw.a: term_draw.o
	$(AR) $(ARFLAGS) lib/libtermdraw.a term_draw.o

term_draw.o: src/term_draw.c
	$(CC) $(CFLAGS) -c src/term_draw.c
	
clean:
	rm -f main main.o lib/libtermdraw.a term_draw.o
