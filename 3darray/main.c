#include<stdio.h>
//#include<conio.h>
 
void main()
{

int i, j, k, x=1;

int arr[3][3][3];

//clrscr();

printf(":::3D Array Elements:::\n\n");
 
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
        arr[i][j][k] = x;
        printf("%d\t",arr[i][j][k]);
        x++;
        }
        printf("\n");
    }
    printf("\n");
}
//getch();
}