#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

const int TEST = 375;



//void insert(char * input);


class array
{

  public:
    
  void insert(char * input)
  {
    

    arrayptr = new char[strlen(input) + 1];
    strcpy(arrayptr,input); 


  }


  void display()
  {
    cout << arrayptr <<endl;



  }
 

  private:
    char * arrayptr;

};






  

int main()
{

  array obj;


  obj.insert(" Highlander ");
  obj.display();










}







