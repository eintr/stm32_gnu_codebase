include ../../config.mk

all: libstm32f10x_stdperiph_3.5.0.a

libstm32f10x_stdperiph_3.5.0.a: objects
	$(AR) cr $@ $(shell ls obj/*.o)

objects:
	make -C src install

install: all
	mkdir -p ../lib
	cp libstm32f10x_stdperiph_3.5.0.a ../lib/
	mkdir -p ../include
	cp inc/*.h ../include/

clean:
	make -C src clean
	rm -f *.a
	rm -rf obj

