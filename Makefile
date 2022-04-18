CC = gcc
CFLAGS = -g -I -std=gnu99 -lpthread -lm -lrt
all: oss process

oss: config.h oss.c
	$(CC) -o $@ $^ $(CFLAGS)

uprocess: config.h process.c
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm oss process logfile