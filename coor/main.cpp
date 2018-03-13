//#include "stdafx.h" C++ Tutorial:: Distance between two points 
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;



int main()
{


  double x[2];
  double y[2];
  double P1;
  double P2;
  double total; 
  double result;

  cout << " Enter object one's x position " << endl;
  cin >> x[0];

  cout << " Enter object one's y position " << endl;
  cin >> y[0];

 
  cout << " Enter object two's x position " << endl;
  cin >> x[1];

  cout << " Enter object two's y position " << endl;
  cin >> y[1];

  P1 = (x[1] - x[0]);
  P1 = (y[1] - y[0]);
  P1 *= P1;
  P2 *= P2;

  result = (P1 + P2);
  total = sqrt(result);


  cout << " The answer is : " << total <<endl;



}
