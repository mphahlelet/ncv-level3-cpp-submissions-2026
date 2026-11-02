#include <iostream>
using namespace std;

int main(){
	int choice;
	
	cout<<"Enter your choice (1 - 4): ";
	cin>>choice;
	
	switch (choice)
	{
		case 1: cout << "Buy airtime";
          break;
		case 2: cout << "Buy data bundle";
          break;
		case 3: cout << "Buy electricity";
          break;
		case 4: cout << "Goodbye";
          break;
		default: cout << "Invalid choice";
	}

	return 0;
}
