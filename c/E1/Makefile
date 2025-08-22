CC = gcc
TARGET = hola
CFLAGS = -Wall -Wextra -pedantic
DD = rm

all: $(TARGET) clean

$(TARGET): hola.o
	$(CC) $(CFLAGS) $^ -o $@

hola.o: hola.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DD) -f *.o

.PHONY: all clean
