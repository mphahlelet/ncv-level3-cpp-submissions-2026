//ask the user for gender code: f or m
//
#include <iostream>
#include <string>
using namespace std;

int main(){
	char gender;
	string description;
	
	cout<<"Please enter your gender code (f forfemale, m for male, o for other): ";
	cin>>gender; 
	
	if (gender=='m'|| gender=='M')
		description = "Male\n";
	else if(gender=='f' || gender=='F')
		description = "Female\n";
	else if (gender == 'o' || gender =='O')
		description = "Other\n";
	else
		description = "Invalid code entered!\n";
		
	cout <<description;
	return 0;
}
