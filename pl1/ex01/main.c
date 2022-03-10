#include <stdio.h>
#include <unistd.h>

int main(void) {

 int x = 1;
 
 pid_t p = fork(); /*pid_t: sys/types.h; fork(): unistd.h*/
 
 if (p == 0) {
  x = x+1;
  printf("1. x = %d\n", x);
  
 } else {
  x = x-1;
  printf("2. x = %d\n", x);
  
 }
 printf("3. %d; x = %d\n", p, x);
 
}


//Ex 1 - a) O output da consola seria 
//2. x = 0
//3. 1234; x = 0
//guest@antix-dei:/media/sf_scomp/scomp_2dj_2022/pl1/ex01
//$ 1. x = 2
//3. 0; x = 2

//Ex 1 - b) Nem sempre o output terá a mesma ordem, uma vez que, é possível que o processo filho aconteça primeiro em determinadas situações



