#include <iostream>
using namespace std;

int main(){
    int month;
    cout << "Enter a month number (1-12): ";
    cin >> month;

    switch(month){
        case 2:
            cout << "28 days" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days" << endl;
            break;
        default:
            cout << "31 days" << endl;
    }
    return 0;
}