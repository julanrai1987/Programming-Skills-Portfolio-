#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string ans;
    cout << "What is the capital of France? ";
    cin >> ans;

    transform(ans.begin(), ans.end(), ans.begin(), ::tolower);

    if(ans == "paris")
        cout << "Correct!" << endl;
    else
        cout << "Wrong!" << endl;

    return 0;
}