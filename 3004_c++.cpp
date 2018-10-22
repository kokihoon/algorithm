#include <iostream>

using namespace std;

int main() {

    int N, count = 2, cou = 0;
    int num[101];
    num[0] = 2;
    cin >> N;
    for(int i = 1; i < 101; i++) {
        if(cou < 2) {
            cou++;
            num[i] = num[i-1]+count;
        }
        if(cou == 2) {
            count++;
            cou = 0;
        }
    }
    cout << num[N-1] << endl;
    return 0;
}