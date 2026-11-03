#include <iostream>
#include <conio.h> //required for _getch()
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    char gender;
public:
    Person();
    Person(string nm, int ag, char gn);
    void setPerson(string nm, int ag, char gn);
    string getName();
    int getAge();
    char getGender();
};

Person::Person()
{
	name = "";
	age = 0;
	gender = ' ';
}

Person:: Person(string nm, int ag, char gn)
{
	setPerson(nm, ag ,gn);
}

void Person::setPerson(string nm, int ag, char gn)
{
    name = nm;
    if (ag >= 0 && ag <= 120) age = ag;
    else age = 0;
    
    if(gn=='f' || gn=='F'||gn=='m'||gn=='M')
		gender = gn;
	else
		gender = 'M';
}

string Person::getName(){return name; }
int Person::getAge() {return age; }
char Person::getGender() {return gender;}

int main(){
	Person pr;
	pr.setPerson("Omphile", 14, 'M');
	
	cout<<"Name: "<<pr.getName()<<endl;
	cout<<"Age: "<<pr.getAge()<<endl;
	cout<<"Gender: "<<pr.getGender()<<endl;
	/*
	Person ps; // default constructor runs
	ps.setPerson("Thato", 23, 'M');
	
	Person p2("Lerato", 19, 'F');  //parameterised constructor runs
	
	cout<<ps.getName() <<", "<<ps.getAge() <<", "<<ps.getGender() <<endl;
	cout<<p2.getName() <<", "<<p2.getAge() <<", "<<p2.getGender() <<endl;

	p2.setPerson("Lerato", 200, 'F');  //invalid age is rejected
	cout<<p2.getName() <<", "<<p2.getAge()<<endl;
	*/
	_getch();
return 0;
}
