all: task0

task0: task0.o my_cmp.o
	gcc -o task0 task0.o my_cmp.o

task0.o: task0.c
	gcc -c -o task0.o task0.c
	
my_cmp.o: my_cmp.c
		gcc -c -o my_cmp.o my_cmp.c

clean:
	rm -rf *.o task0
