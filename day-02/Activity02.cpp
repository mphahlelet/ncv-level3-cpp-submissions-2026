//Calculate the area and perimeter of a rectangle
#include <iostream>
using namespace std;

int main(){
	//variables declaration
	int length, breadth, area, perimeter;
	//getting inputs and assigning inputs to variables
	cout<<"Rectangle: Area and Perimeter\n\n";
	cout<<"Please enter length: ";
	cin>>length;
	cout<<"Please enter breadth: ";
	cin>>breadth;
	//calculations
	area = length * breadth;
	perimeter = 2*(length + breadth);
	//output
	cout<<"Area is: "<<area<<"\n";
	cout<<"Perimeter is: "<<perimeter;
	
	
return 0;	
}

