#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
	int i;
	int status;
	pid_t p;
	
	for (i = 0; i < 2; i++) {
		p = fork();
		if (p == 0) {
			sleep(1); /*sleep(): unistd.h*/
			waitpid(p,NULL,0);
			exit(i);
		}
	}
	printf("This is the end.\n");
}
