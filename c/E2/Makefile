CC = gcc
TARGET = sizeof
DD = rm
CFLAGS = -Wall -Wextra -pedantic

all: $(TARGET) clean

$(TARGET): sizeof.o
	$(CC) $(CFLAGS) $^ -o $@

sizeof.o: sizeof.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DD) -f *.o 

.PHONY: all clean
