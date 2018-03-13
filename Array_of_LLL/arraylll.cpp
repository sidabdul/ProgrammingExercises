#include "arraylll.h"


using namespace std;



Vehicle:: Vehicle()
{

  vehicle_make = NULL;
  vehicle_model = NULL;;
  year = NULL;
  licplate = NULL;
}
    

Vehicle::~Vehicle()
{

  vehicle_make = NULL;
  delete vehicle_make;
  vehicle_model = NULL;
  delete vehicle_model;
  year = NULL;
  delete year;
  licplate = NULL;
  delete licplate; 
}


void Vehicle::set_vehicle_make(char * const input_vehicle)
{

  vehicle_make = new char[strlen(input_vehicle) + 1];
  strcpy(vehicle_make, input_vehicle);

}


void Vehicle::set_vehicle_model(char * const input_model)
{

  vehicle_model = new char[strlen(input_model) + 1];
  strcpy(vehicle_model, input_model);

}


void Vehicle::set_vehicle_year(char * const input_year)
{

  year = new char[strlen(input_year) + 1];
  strcpy(year, input_year);

}


void Vehicle::set_vehicle_licplate(char * const input_licplate)
{

  licplate = new char[strlen(input_licplate) + 1];
  strcpy(licplate, input_licplate);

}


char * Vehicle::get_vehicle_make()
{
  return vehicle_make;
}


char * Vehicle::get_vehicle_model()
{
  return vehicle_model;
}


char * Vehicle::get_year()
{
  return year;
}


char * Vehicle::get_licplate()
{
  return licplate;
}









node::node()
{
  next = NULL;  
}


node::~node()
{
  delete next;
  next = NULL;
}


node *& ::node::get_next()
{
   return next;
}


//Construct array of lll here..
arraylll::arraylll()
{

  array = new node * [SIZE];
    
  for(int i = 0; i < SIZE; ++i)
  {
     array[i] = NULL;
  }

}


arraylll::~arraylll()
{

  for (int i = 0; i < SIZE - 1; ++i)
  {	
    node * current = array[i];
    
    while(current)
    {
      node * temp = current;
      current = current -> get_next();
      temp -> get_next() = NULL;
      delete temp;
      array[i] = NULL;
    }
   }
	
 delete [] array;
}



int arraylll::insert_standard_vehicles(char input_make[], char input_model[], char input_year[], char input_lic[])
{

if(array[0] == NULL)
{
  
    node * temp = new node;       //array[i];
    
    temp -> get_next() = NULL;
    
    temp -> set_vehicle_make(input_make);
  
    temp -> set_vehicle_model(input_model);

    temp -> set_vehicle_year(input_year);

    temp -> set_vehicle_licplate(input_lic);
 
    temp -> get_next() = array[0];

    array[0] = temp;

/*   

*/
}

}


int arraylll::display_all()
{


 for (int i = 0; i < SIZE; ++i)
    {
        node * current = array[i];
        while (current)
        {
            cout << "\n";
            cout << current -> get_vehicle_make();
            
            cout << "\n";
            cout << current -> get_vehicle_model();
            
            cout << "\n";
            cout << current -> get_year(); 
            
            cout << "\n";
            cout << current -> get_licplate();

            cout << "\n";
            current = current -> get_next();


        }

    }
    return 0;




}















