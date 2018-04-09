#include <iostream>

using namespace std;

int main() {
    int num, number;
    int d[11] = {0, };
    cin >> num;
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    for(int i = 4; i < 12; i++) {
        d[i] = d[i-1] + d[i-2] + d[i-3];
    }
    while(num--) {
        cin >> number;
        cout << d[number] << '\n';
    }

    return 0;
}