#include <iostream>
using namespace std;

string checkEven(int n){
    if(n % 2 == 0) return "The provided number is even";
    return "The provided number is odd";
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << checkEven(n) << endl;
    return 0;
}