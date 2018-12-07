include ../../config.mk

all: libcmsis_3.5.0.a

libcmsis_3.5.0.a: obj/core_cm3.o  obj/startup.o  obj/system_stm32f10x.o
	$(AR) -cr $@ $^

obj/core_cm3.o:
	make -C CoreSupport/ install

obj/startup.o:
	make -C DeviceSupport/STM32F10x/ install

install: all
	mkdir -p ../lib
	cp libcmsis_3.5.0.a ../lib/
	mkdir -p ../include
	cp include/*.h ../include/

clean:
	make -C CoreSupport/ clean
	make -C DeviceSupport/STM32F10x/ clean
	rm -f *.a
	rm -rf obj include

