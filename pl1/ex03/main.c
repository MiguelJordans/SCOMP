#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
 fork(); fork(); fork();
 printf("SCOMP!\n");
}

//Ex 3) a) - 8 processos
//		b) - X
//		c) - 8 vezes
