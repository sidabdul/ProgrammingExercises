#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>



int main()
{

  int fun1(unsigned word) 
  {
    return (int) ((word << 24) >> 24);
  }

  int fun2(unsigned word) 
  {
    return ((int) word << 24) >> 24;
  }


  int w = 0x00000076;


  int z = fun1(w);

  

  printf("fun1 yields :  %x", z );


  printf("\n");

}
