#include <iostream>
using namespace std;

int main(){
int choice;

cout<<"Enter your choice (1 - 4): ";
cin>>choice;

 
if (choice == 1)
    cout << "Buy airtime";
else if (choice == 2)
    cout << "Buy data bundle";
else if (choice == 3)
    cout << "Buy electricity";
else if (choice == 4)
    cout << "Goodbye";
else
    cout << "Invalid choice";

return 0;
}
