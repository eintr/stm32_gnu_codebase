
CFLAGS+=-DSTM32F10X_MD -DGAUSS_MCU_BOARD_V1

CFLAGS+=-mcpu=cortex-m3 -mlittle-endian -mthumb

CC=arm-none-eabi-gcc
AR=arm-none-eabi-ar
OBJCOPY=arm-none-eabi-objcopy

