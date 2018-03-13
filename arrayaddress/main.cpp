#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{

/*
   int array[4];  


   cout << "Size of array is  " << sizeof(array) <<endl;


   for(int i = 0; i < 4; ++i)
   {
   
     cout << "Address of array element " << i + 1 << " is " << &array[i] << endl;  


   }

*/



  struct node
  {
   // char * data;
    node * next;
  };


    


  cout << "Size of node structure is  " << sizeof(node) << endl;








   return 0;
	
}

