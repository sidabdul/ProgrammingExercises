#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{

  class X
  {
    public:
      void f() 
      {
        cout << "  f´s own stuff " <<endl;
      }
      void g()
      {
        cout << "  g´s own stuff " <<endl;
      }
 
  void fct(X* p)
  {
    p->f();
    p->g();
  }

 
  };
   

  X obj;

  X * ptr;

  obj.fct(ptr);








   return 0;
	
}

