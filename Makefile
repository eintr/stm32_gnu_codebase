include config.mk

all: sdk_build

sdk_build:
	make -C sdk sdk

clean:
	make -C sdk/CMSIS_V3.5.0/ clean
	make -C sdk/STM32F10x_StdPeriph_Lib_V3.5.0/ clean

