#include <iostream>

using namespace std;

int main() {

    int num, i = 1;
    
    cin >> num;

    while(i != 10) {
        cout << num<<" * "<<i<<" = "<< num * i << '\n';
        i++;
    }

    return 0;
}