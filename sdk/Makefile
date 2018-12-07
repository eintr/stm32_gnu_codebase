include ../config.mk

all: sdk

sdk:
	make -C CMSIS_V3.5.0/ install
	make -C STM32F10x_StdPeriph_Lib_V3.5.0/ install

clean:
	make -C CMSIS_V3.5.0/ clean
	make -C STM32F10x_StdPeriph_Lib_V3.5.0/ clean
	rm -rf lib include

