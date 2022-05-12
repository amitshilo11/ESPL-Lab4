#include <stdio.h>

extern int funcA(char* str);

int main(int argc, char **argv) {
    int res;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s string\n", argv[0]);
		return 0;
	}

    char* str = *(argv+1);
  
    res = funcA(str);

    printf("The lenght of %s is: %d \n",str, res);

	return 0;
}
