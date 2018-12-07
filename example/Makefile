include ../config.mk

CFLAGS+=-g -O0 -I../sdk/include
LDFLAGS+=-T../ldscripts/stm32f103C8T6.ld -L../sdk/lib -lcmsis_3.5.0  -lstm32f10x_stdperiph_3.5.0 -specs=nosys.specs

SRCS=$(shell ls *.c)
OBJS=$(SRCS:.c=.o)

all: main.bin main.hex

flash: main.bin main.hex
	#sudo st-flash --reset write main.bin 0x8000000
	sudo st-flash --reset --format=ihex write main.hex

%.o: %.c
	@echo "[C] $@ <- $^" ; $(CC) $(CFLAGS) -Os -c -o $@ $<

main.elf: $(OBJS)
	@echo "[L] $@ <- $^" ; $(CC) --static -Wl,--gc-sections $^ $(LDFLAGS) -o $@

main.hex: main.elf
	@echo Extracting $@ ; $(OBJCOPY) -Oihex $< $@

main.bin: main.elf
	@echo Extracting $@ ; $(OBJCOPY) -Obinary $< $@

clean:
	rm -f *.o *.elf *.hex *.bin

