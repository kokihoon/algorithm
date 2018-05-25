#include <iostream>
using namespace std;

int main() {
    int a, b;
    int num[10000];
    cin >> a;
    int count = 1;
    for(int i = 1; i <= a; i++) {
        if(a%i == 0){
            num[count++] = i;
        }
    }
    for(int i = 1; i < count; i++) {
        if(i +1 == count) {
            cout << num[i]<<'\n';
        }
        else {
                    cout << num[i] << ", ";

        }
    }
    return 0;
}