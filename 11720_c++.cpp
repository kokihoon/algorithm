#include <iostream>

using namespace std;

int main() {

    int num;
    int sum = 0, a;
    cin >> num;
    while(num--) {
        scanf("%1d", &a);
        sum += a;
    }

    cout << sum;
    return 0;
}