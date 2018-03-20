#include <iostream>

using namespace std;

int main() {

    int num, i = 1;
    int sum = 0;
    cin >> num;

    while(num >= i) {
        sum += i++;

    }
    cout << sum<<'\n';
    return 0;
}