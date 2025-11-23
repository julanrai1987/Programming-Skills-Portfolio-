#include <iostream>
using namespace std;

int main(){
    const int correctPassword = 12345;
    int attempt;
    int tries = 0;

    while(tries < 5){
        cout << "Enter password: ";
        cin >> attempt;

        if(attempt == correctPassword){
            cout << "Welcome to the Secure Area" << endl;
            return 0;
        }

        tries++;
        cout << "Incorrect. Attempts left: " << 5 - tries << endl;
    }

    cout << "5 failed attempts. Authorities have been alerted!" << endl;
    return 0;
}