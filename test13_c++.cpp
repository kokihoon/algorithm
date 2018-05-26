#include <iostream>

using namespace std;

int main() {

    long n;
    int max = 0, min = 1000;
    int x1, x2;
    long num1[100000][3];
    cin >> n;
    for(int i= 0; i < n;i++) {
        cin >>num1[i][0] >> num1[i][1];
        if(i == 0) {
            cout << "(-, " << num1[i][0] << ")\n";

        }
        else {
            if(num1[i-1][1] > num1[i][0]){
                cout << "["<<num1[i][0] << ", " << num1[i-1][1] <<"]\n";
            }
            if(num1[i-1][1] < num1[i][0]) {
                cout << "(" << num1[i-1][1] <<", " << num1[i][0] <<")\n";
            }
        }

        if(i == n-1) {
            cout << "(" << num1[i][1]<<", +)\n";
        }
    }
    return 0;
}