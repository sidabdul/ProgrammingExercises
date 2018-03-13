#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <fstream>


using namespace std;

void printarrayrecursion(int * array, int i = 0)
{

  if(!array) return;

  cout << array[i];

  
  printarrayrecursion(array, ++i);

}

int main()
{

  int num_array[] = {1,2,3,4,5,6,7,8};


  printarrayrecursion(num_array, 0);


  return 0;
}
