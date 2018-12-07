include ../../../config.mk

SRCS=$(shell ls *.c)

OBJS=$(SRCS:.c=.o)

all: $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -Os -c -o $@ $<

install: all
	mkdir -p ../obj
	cp *.o ../obj
	mkdir -p ../include
	cp *.h ../include/

clean:
	rm -f *.o

