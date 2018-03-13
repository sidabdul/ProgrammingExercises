#include<stdio.h>

int main()
{
int i;
int *ptr, *curr;
int array[5] = {10,20,30,40,50};
ptr=(int*) malloc(sizeof(int) * 5);
curr=ptr;
for(i = 0; i < 5; i++)
{
ptr[i]= *(array + i);
curr++;
printf(“Element %d: %d\n”, i, *curr);
}
free(curr);
return 0;
}
