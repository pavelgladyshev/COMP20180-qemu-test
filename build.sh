riscv64-linux-gnu-gcc -T linker.ld -I include/ boot.s serial.c kernel.c -o build/kernel -nostdlib -lgcc -g
