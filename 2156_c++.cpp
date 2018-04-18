#include <iostream>

using namespace std;

int d[10001] = {0, };
int d1[10001] = {0, };
int main() {
    int num;
    cin >> num;

    for(int i = 1; i <= num; i++) {
        cin >> d[i];
    }
    d1[1] = d[1];
    d1[2] = d[1] + d[2];

    for(int i = 3; i <= num; i++) {
        d1[i] = d[i-1];
        if(d1[i] < d1[i-2] + d[i]) {
            d1[i] = d1[i-2] + d[i];
        }
        if(d1[i] < d1[i-3] + d[i] + d[i-1]){
            d1[i] = d1[i-3] + d[i] + d[i-1];
        }
    }
    cout <<d1[num];
    return 0;
}