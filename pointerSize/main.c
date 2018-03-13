#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>




int main()
{


  int iptr = NULL;
  float *  fptr = NULL;
  char *cptr = NULL;
  double * dp = NULL;


  int i;

  float f;

  double d;

  printf("\nSize of Integer Pointer   : %d Bytes",sizeof(iptr));
  printf("\nSize of Character Pointer : %d Bytes",sizeof(&cptr));
  printf("\nSize of Float Pointer     : %d Bytes",sizeof(fptr));


  printf("\nSize of Double Pointer     : %d Bytes",sizeof(dp));

  printf("\nSize of Int  : %d Bytes",sizeof(i));



  printf("\nSize of Float  : %d Bytes",sizeof(f));


  printf("\nSize of Double  : %d Bytes",sizeof(d));


  printf("\n");


  printf("\n");

  printf("\n");


  return 0;







}
