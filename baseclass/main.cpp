#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{


  class a
  {
    
    public:
   
      void display()
      {
        cout << " Base class display function  " <<endl;
  
      }
    
    protected:

  };  


  class b : public a
  {

 
    public:
    
      void display()
      {
        cout << " derived class display function  " <<endl;
  
      }
    
    protected:


  };





  b obj;

  obj.a::display();



   return 0;
	
}

