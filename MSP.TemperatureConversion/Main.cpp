#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "enter your temperature: "; 
	double temp;
	cin >> temp;//collect the temperature variable
	cout << "enter F for fahrenheit or C for celsius: "; 
	char scale;
	cin >> scale;//collect the scale variable

	switch (scale) //choose which calculation to perform
	{
	case 'f': 
	case 'F': cout << "your temperature conversion is: " << (5.0 / 9.0) * (temp - 32.0); /*calculate celsius*/ break;
	case 'c': 
	case 'C': cout << "your temperature conversion is: " << (9.0 / 5.0) * temp + 32.0; /*calculate fahrenheit*/ break;
	default: cout << "error: that is not a known scale of temperature";
	}

	_getch();
	return 0;
}