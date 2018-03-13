#include <stdio.h>

int main()
{

  

  int a[] = {55,66,55,44};

  int b[] = {5555,611116,555555,477774};








void swapArray(int* a, int* b, int arraysize)
{
    int temp;
    int i;

    for(i=0; i<arraysize; i++)
    {
      temp=a[i];
      a[i]=b[i];
      b[i]=temp;
    }


}


  swapArray(&a, &b, 4);



  printf("Array a after swap is : %d", a);














}
