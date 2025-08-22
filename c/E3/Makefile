CC = gcc
CFLAGS = -Wall -Wextra -pedantic
DD = rm -f
TARGET = datatypes

all: $(TARGET) clean

$(TARGET): datatypes.o
	$(CC) $(CFLAGS) $^ -o $@

datatypes.o: datatypes.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DD) -f *.o

.PHONY: all clean
