#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, hometown;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your hometown: ";
    getline(cin, hometown);

    cout << "Enter your age: ";
    cin >> age;

    cout << name << "\n" << hometown << "\n" << age << endl;
    return 0;
}