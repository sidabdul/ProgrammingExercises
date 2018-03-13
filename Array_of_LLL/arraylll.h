#include <iostream>
#include <cstring>
#include <fstream>
#include <cctype>


const int SIZE = 5;




class Vehicle
{

  public:
    Vehicle();
    ~Vehicle();
   // void set_next(node * following);
    void set_vehicle_make(char * const input_make);
    void set_vehicle_model(char * const intput_model);
    void set_vehicle_year(char * const input_year); 
    void set_vehicle_licplate(char * const input_licplate); 

    char * get_vehicle_make();
    char * get_vehicle_model();
    char * get_year(); 
    char * get_licplate();

  protected:
    //Attributes of a vehicle defined here..
    char * vehicle_make;
    char * vehicle_model;
    char * year;
    char * licplate;    


};




class node : public Vehicle
{

  public:
  node();
  ~node();
  node * & get_next();
  protected:
  
  node * next;

};




class arraylll
{

  public:
    arraylll();
    ~arraylll();
    int insert_standard_vehicles(char input_make[], char input_model[], char input_year[], char input_lic[]);  
    int display_all();

  protected:
  
  node ** array;  

  private:



};
