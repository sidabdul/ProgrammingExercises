#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>




int main()
{


  /*

     typedef int *int_pointer;
     int_pointer ip;

  */



  typedef unsigned char *byte_pointer;

  void show_bytes(byte_pointer start, int len) 
  {
    int i;
    for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
    printf("\n");
  }


  void show_int(int x) 
  {
    show_bytes((byte_pointer) &x, sizeof(int));
  }




  void show_float(float x) 
  {
    show_bytes((byte_pointer) &x, sizeof(float));
  }


  void show_pointer(void *x) 
  {
    show_bytes((byte_pointer) &x, sizeof(void *));
  }




  void test_show_bytes(int val) 
  {
  
  int ival = val;
  float fval = (float) ival;
  int *pval = &ival;
  show_int(ival);
  show_float(fval);
  show_pointer(pval);
  
  }


//  test_show_bytes(12345);




    double hex = 0x87654321;
  
//  byte_pointer valp = (byte_pointer) &val;
//  show_bytes(valp, 1); /* A. */
//  show_bytes(valp, 2); /* B. */
//  show_bytes(valp, 3); /* C. */ 


 double result = hex & 0xFF;


//  printf("Size of val = 0x87654321 is : %ld", sizeof(val));



 printf(" Least significant bytes of val, with all other bits set to 0 : %ld \n", result);



const char *s = "abcdef";
//show_bytes((byte_pointer) s, strlen(s));



//  printf("Size of const char * s is : %ld", sizeof(s));


}
