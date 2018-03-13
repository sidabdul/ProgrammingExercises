#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>




int main()
{
  unsigned int strlonger(char *s, char *t) 
  {
    return strlen(s) - strlen(t) > 0;
  }


  printf("foo bar : %d " , strlonger("foo", "bar"));
  
  printf("\n"); 


  printf("food bar : %d " , strlonger("food", "bar"));
  printf("\n"); 


  printf("bar food : %d " , strlonger("bar", "food"));

  printf("\n"); 


}
