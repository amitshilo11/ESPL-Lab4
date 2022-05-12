all: exe

asm-libs: task3.s
	nasm -f elf32 task3.s -o task3.o

exe: asm-libs
	ld -melf_i386 -o task3 task3.o -lc -I/lib/ld-linux.so.2
	
clean:
	rm -f *.o task3