#include <iostream>

using namespace std;

struct StrCar
{
	char RegCode[10];
	int PhoneNo;
	char Colour[10];
	int Model;
};

int main()
{
	StrCar ** Car;
	Car = new StrCar * [6];


	cout<<" Enter vehicle reg number:"<<endl;

	cin >> Car[0] -> RegCode;

	cout<<" You entered"<<endl;

	cout<<Car[0] -> RegCode<<endl;

//	system("pause");
	return 0;
}
