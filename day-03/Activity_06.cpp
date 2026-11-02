//calculate sum and average from 5 entries
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int number,sum = 0;
	float average = 0;
	int i;
	
	for(i = 1; i<=5; i++){
		//sum = 0;
		cout<<"Please enter a number "<<i<<" :";
		cin>>number;
		
		if(number >= 0 && number <= 50)
			sum = sum + number;
		else{
			cout<<"Invalid number entered.\n";
			i--;}
	}
	average = sum/i;
	cout << "Sum: " << sum << endl;
	// 2. Apply formatting BEFORE printing the average
	cout << fixed << setprecision(2);
	cout << "Average: " << average << endl;
	
return 0;
}
