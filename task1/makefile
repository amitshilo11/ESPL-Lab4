all: exe

asm-libs: funcA.asm
	nasm -f elf32 funcA.asm -o funcA.o
	
c-libs: main.c
	gcc -m32 -Wall -ansi -c -nostdlib -fno-stack-protector main.c -o main.o

exe: asm-libs c-libs
	gcc -m32 main.o funcA.o -o task1
	
clean:
	rm -f *.o task1