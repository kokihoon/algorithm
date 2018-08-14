#include <iostream>

using namespace std;

int main() {

    int a,b,c, count = 1;
    int a1 = 1, b1 = 1, c1 = 1;
    cin >> a >> b >> c;

    while(1) {
        if(a == a1 && b == b1 && c == c1) {
            break;
        }
        a1++;
        b1++;
        c1++;
        count++;

        if(a1 % 16 == 0) {
            a1 = 1;
        }
        if(b1 % 29 == 0) {
            b1 = 1;
        }
        if(c1 % 20 == 0) {
            c1 = 1;
        }
    }

    cout << count << '\n';
    return 0;
}