#include "arraylll.h"


using namespace std;

int main()
{



  char file_make[] = "Ford";
  char file_model[] = "F-250";
  char file_year[] = "2014";
  char file_licplate[] ="YRX424" ; 





  arraylll obj;
  obj.insert_standard_vehicles(file_make, file_model, file_year, file_licplate);


  obj.display_all();




  return 0;

}
