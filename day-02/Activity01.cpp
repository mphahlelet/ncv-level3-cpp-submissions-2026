#include <iostream>
using namespace std;

int main(){
    
    int timeInMinutes, hrs, mins, secs;
    
    cout<<"Enter time in minutes: ";
    cin>>timeInMinutes;
    
    hrs = timeInMinutes / 60;
    mins = timeInMinutes % 60;
    
    cout <<"The time is: "<<hrs<<" hrs "<<":"<<mins<<" mins"<<"\n";
return 0;    
}
