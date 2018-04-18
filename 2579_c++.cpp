#include <iostream>


using namespace std;

int main() {

    int num, sum = 0, sum1 = 0;
    int d[301] = {0, };
    int d1[301] = {0,};
    cin >> num;
    for(int i = 1; i <= num; i++) {
        cin >> d[i];

    }
    d1[1] = d[1];
    d1[2] = d[1]+d[2];

    for(int i = 3; i <= num; i++) {
        sum = d1[i-2] + d[i];
        sum1 = d1[i-3] + d[i] + d[i-1];
        if(sum > sum1 ){
            d1[i] = sum;
        }
        else {
            d1[i] = sum1;
        }
    }

    cout << d1[num] << '\n';

    return 0;
}