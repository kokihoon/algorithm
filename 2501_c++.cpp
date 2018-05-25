#include <iostream>
using namespace std;

int main() {
    int a, b;
    int num[10000];
    cin >> a >> b;
    int count = 1;
    for(int i = 1; i <= a; i++) {
        if(a%i == 0){
            num[count++] = i;
        }
    }
    if(num[b] != 0){

        cout << num[b]<<'\n';
    }
    else {
        cout << 0 <<'\n';
    }
    return 0;
}