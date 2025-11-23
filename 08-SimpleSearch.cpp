#include <iostream>
#include <string>
using namespace std;

int main(){
    string arr[6] = {"Jake","Zac","Ian","Ron","Sam","Dave"};
    string search;

    cout << "Enter name to search: ";
    cin >> search;

    for(int i=0; i<6; i++){
        if(arr[i] == search){
            cout << search << " found!" << endl;
            return 0;
        }
    }

    cout << search << " not found." << endl;
    return 0;
}