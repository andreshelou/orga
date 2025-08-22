CC = gcc
CFLAGS = -Wall -Wextra -pedantic
DD = rm -f
TARGET = datatypesfix

all: $(TARGET) clean

$(TARGET): datatypesfix.o
	$(CC) $(CFLAGS) $^ -o $@

datatypesfix.o: datatypesfix.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DD) -f *.o

.PHONY: all clean
