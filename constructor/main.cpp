#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{


  class account
  {
    
    public:
   
      account()
      {

      }
  
      account(float f)
      {
        bal = f;
   
      }
  
      void display()
      {
        cout << " Base class display function  " <<endl;
  
      }
 
     
      void display_bal()
      {
        cout << " Account balance is  " << bal << endl;
  
      }
     
    protected:

     float bal;

  };  


  class savings : public account
  {

 
    public:
  
 
      savings()
      {

      }
  
      savings(float f):account(f)
      {
        bal = f;
      }
  
  
      void display()
      {
        cout << " derived class display function  " <<endl;
  
      }
    
       
      void display_bal()
      {
        cout << " Savings balance is  " << bal << endl;
  
      }
  


     protected:
        
     float bal;

    };





   savings obj(100.0);
   
   obj.display_bal();

   obj.account::display_bal();
  return 0;
  

}
