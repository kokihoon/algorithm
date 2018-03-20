#include <iostream>

using namespace std;

int main() {

    char str[100];
    while(scanf("%[^\n]\n", str) ==1) {
        cout << str <<'\n';
    }
    return 0;
}