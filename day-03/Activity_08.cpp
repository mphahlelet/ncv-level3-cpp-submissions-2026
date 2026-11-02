//calculate sum and average from 5 entries
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int number,sum = 0, count = 1;
	float average = 0;
	
	cout<<"Please enter number "<<count<<" :";
	cin>>number;
	
	while(number !=-1){//-1 as a SENTINEL
		cout<<count<<": ";
		count++;
		//reprompt
		cout<<"Please enter number "<<count<<" :";
		cin>>number;
		
		if(number >= 0 && number <= 50)
			sum = sum + number;
		else{
			cout<<"Invalid number entered.\n";
			count--;}
	  count++;
	}
	
	average = sum/count;
	cout << "Sum: " << sum << endl;
	// 2. Apply formatting BEFORE printing the average
	cout << fixed << setprecision(2);
	cout << "Average: " << average << endl;
	
return 0;
}

