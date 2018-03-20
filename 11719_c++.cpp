#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char c;
    while ((c = getchar()) && c != EOF) {
        cout << c;
    }
    return 0;
}