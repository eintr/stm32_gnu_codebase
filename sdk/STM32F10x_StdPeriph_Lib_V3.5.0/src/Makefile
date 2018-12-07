include ../../../config.mk

CFLAGS+=-I../inc -I../../include -D'assert_param(...)={}'

SRCS=$(shell ls *.c)

OBJS=$(SRCS:.c=.o)

all: $(OBJS)

%.o: %.c
	    $(CC) $(CFLAGS) -Os -c -o $@ $<

install: all
	mkdir -p ../obj
	cp -p $(OBJS) ../obj/

clean:
	    rm -f *.o

