#include <stdio.h>
#include <stdlib.h> //required to use 'rand()' and 'srand()'
#include <sys/time.h>
#include <time.h> //required to use 'gettimeofday()'
#include <string.h>



int rand_num(int total)
{

   int num;
   num = rand()%total; //generate a number between 0 and the total 
   return num;
}





int main()
{




   int total = 8;
   int index = 0;
   int i = 0;
   int max = 0;
   char str[10];
   //create an array of strings
   char words[9] [9] = {"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
   //create an array of numbers
   int nums[9] = {0,1,2,3,4,5,6,7,8};

   for(i = 0; i < 9; ++i)
   {
      printf(" %d ",nums[i]);
 
   }



      printf(" \n ");


   int j = 0;   

   for(j = 0; j < 9; ++j)  
   {
      index = rand_num(total);

      max = nums[total];
      nums[total] = nums[index];  //shuffle the two numbers
      nums[index] = max;
   }


   for(i = 0; i < 9; ++i)
   {
      printf(" %d ",nums[i]);
 
   }


      printf(" \n ");











}



