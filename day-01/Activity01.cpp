
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string name = "";
    string gender = "";

    cout << "What is your name? ";
    getline(cin >>ws, name);

    cout << "What is your gender? (enter 'm' for Male or 'f' for Female) ";
    getline(cin >> ws, gender);

    cout << "Hello, " << name << endl;

    // Convert gender to lowercase
   /* for (int i = 0; i < gender.length(); i++) {
        gender[i] = tolower(gender[i]);
    }*/

    if (gender == "m" or gender=="M") {
        cout << "You are a clever man!" << endl;
    } else {
        cout << "You are a clever woman!" << endl;
    }

    return 0;
}
