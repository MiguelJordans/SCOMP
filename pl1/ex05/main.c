#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	
	pid_t p;
	int status;

	for(int i = 1; i < 3; i++){
		
		p = fork();
		
		if(p == 0){
			sleep(i);
			exit(i);	
		}
		waitpid(p,&status,0);
		printf("Filho %d: %d\n",i,WEXITSTATUS(status));
	}
	return 0;

}
