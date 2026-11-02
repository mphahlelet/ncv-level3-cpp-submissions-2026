//ask the user to enter NCV level
//
#include <iostream>
#include <string>
using namespace std;

int main(){
	int level;
	string description; 
	
	cout<<"Please enter NCV level: ";
	cin>>level; 
	
	switch (level)
	{
		case 2:
			description = "Level 02\n";
			break;
		case 3:
			description = "Level 03\n";
			break;
		case 4:
			description = "Level 04\n";
			break;
		default:
			description = "Invalid level entered!\n";
	}	
	cout<<description;
	
	return 0;
}


