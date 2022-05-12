all: exe

asm-libs: my_cmp.asm
	nasm -f elf32 my_cmp.asm -o my_cmp.o
	
c-libs: task0.c
	gcc -m32 -Wall -ansi -c -nostdlib -fno-stack-protector task0.c -o task0.o

exe: asm-libs c-libs
	gcc -m32 task0.o my_cmp.o -o task0
	
clean:
	rm -f *.o task0