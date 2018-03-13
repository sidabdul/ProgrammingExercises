#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>




int main()
{

  int x = 0xAAAABBBB;



  int result =  x >> 16 | x << 16;
 

  printf(" Result before high low swap : %X ", x);


  printf("\n"); 
  
  printf(" Now result AFTER swapping high low byte : %X ", result);

  printf("\n"); 


}
