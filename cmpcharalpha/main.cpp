#include<iostream>

#include<cstring>

using namespace std;


int main()
{

  char * str1 = "a";

  char * str2 = "b";

  if(strcmp(str1,str2))
  {  
    cout << "str1 is lexigraphically first" <<endl;
  }
  
  else 
  { 
    cout << "str2 is lexigraphically first" <<endl;
  }




 return 0;


}
