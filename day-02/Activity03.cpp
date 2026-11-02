//Calculate the area and perimeter of a circle
#include <iostream>
using namespace std;
#include <cmath>

int main(){
	//variables declaration
	int area, perimeter;
	double radius;
	const double pi = 3.14159;
	//getting inputs and assigning inputs to variables
	cout<<"Circle: Area and Perimeter\n\n";
	cout<<"Please enter radius: ";
	cin>>radius;
	
	//calculations
	area = 2* pi * pow(radius,2);
	perimeter = 2*pi*radius;
	//output
	cout<<"Area is: "<<area<<"\n";
	cout<<"Perimeter is: "<<perimeter;
	
	
return 0;	
}

