#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	
	pid_t pid;
	int i;
	
	char arr[3][20] = {"I am...\n","the...\n","father!\n"};
	
	for(i = 0 ; i < 3 ; i ++){
		printf("%s",arr[i]);
	
		pid = fork();
		
		if(pid == 0 ) {
				printf("I'll never join you!\n");
				return EXIT_SUCCESS;
			
		}		
		
	}
	return 0;
}
