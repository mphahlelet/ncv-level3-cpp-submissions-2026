#include <iostream>
#include <string>
using namespace std;

int main(){
     int num1, num2, answer;
     string message ="Not even";

     cout<<"Enter first number: ";
     cin>>num1;
     
     cout<<"Enter second number: ";
     cin>>num2;

     //answer = num1 % 2;

     if (num1 % 2 == 0 && num2 % 2== 0)
        cout<<num1<<" and "<<num2<<" are even numbers!";
     
	 cout <<message;

    return 0;
}
