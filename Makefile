CC=gcc
CFLAGS=-Wall -Werror -Wextra -std=c99 -g -lmagic
OBJS=tile-gen.o
TARGET_NAME=tgen

all: tile-gen

tgen: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET_NAME)

tile-gen.o: tile-list.h tile-gen.h tile-gen.c
tile-list.o: tile-list.h tile-list.c

clean:
	rm -f $(TARGET_NAME)
	rm -f $(OBJS)