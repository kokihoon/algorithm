#include <iostream>

using namespace std;

int main() {
    char s[100] = {0,};
    int count = 0;
    cin>> s;

    for(int i =0; i < 100; i++) {
        if(s[i] == 0) {
            break;
        }

        count++;
    }
    cout<<count;
    return 0;
}