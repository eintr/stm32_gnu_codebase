# stm32_gnu_codebase
A GNU tool-chain development environment for STM32 MCUs.

## Requirement
* binutils-arm-none-eabi
* gcc-arm-none-eabi
* stlink[https://github.com/texane/stlink.git]

## Support
Currently, __only__ stm32f103C8T6 is supported.
Add your own ld scripts into ldscripts/ dir and reference it in your Makefile.

## Usage
### Build SDK
run 'make' at the top dir
~~~~
make
~~~~

### Build example
~~~~
cd example
make
~~~~

### Flash example
Plug in your st-linkv2, connect all lines, and at the example dir
~~~~
make flash
~~~~

### Create your own project
At the top dir
~~~~
cp -r example project1
~~~~

## Next
Read the Makefiles code for more details you concerned about.
