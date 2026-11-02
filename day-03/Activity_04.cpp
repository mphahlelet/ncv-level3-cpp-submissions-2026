//ask the user for gender code: f or m
//
#include <iostream>
#include <string>
using namespace std;

int main(){
	char gender, converted_gender;
	string description;
	
	cout<<"Please enter your gender code (f forfemale, m for male, o for other): ";
	cin>>gender; 
	
	converted_gender = tolower(gender);
	switch (converted_gender)
	{
		case 'm':
			description = "Male\n";
			break;
		case 'f':
			description = "Female\n";
			break;
		case 'o':
			description = "Other\n";
			break;
		default:
			description = "Invalid input\n";
	}	
	cout<<description;
	
	return 0;
}

