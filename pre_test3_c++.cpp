#include <iostream>

using namespace std;

int main() {

    int num;
    cin >> num;
    if(num % 400 ==0){
        cout << "Leap Year" << '\n';
    }
    else {
        if(num % 100 == 0) {
            cout << "Not Leap Year" <<'\n';
        }
        else {
            if(num % 4 == 0) {
                cout << "Leap Year" << '\n';
            }
            else {
                cout << "Not Leap Year"<<'\n';
            }
        }
    }

    return 0;
}