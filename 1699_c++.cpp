#include <iostream>

using namespace std;


int main() {

    int d[100001] = {0,};

    int num;

    cin >> num;

    for(int i = 1; i <= num; i++) {
        
        for(int j = 1; j*j <= i; j++) {
            if(d[i] > d[i-j*j] + 1 || d[i] == 0) {
                d[i] = d[i-j*j] +1;
            }
        }
    }
    
    cout << d[num] << '\n';
    return 0;
}