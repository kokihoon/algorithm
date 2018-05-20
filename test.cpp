#include <algorithm>
#include <iostream>
#include <math.h>

int soluation(int A, int B, int C, int D);
using namespace std;
int main() {
    int A,B,C,D;
    cin >> A >>B>>C>>D;
    cout << soluation(A,B,C,D) << '\n';
    return 0;
}

int soluation(int A, int B, int C, int D) {
    int max;
    int AA =A, BB=B,CC=C,DD=D;
    int temp;
    int top, i = 4;
    max = (AA-BB)^2 + (CC-DD)^2;

    while(i--){
        top = pow((AA-BB),2) + pow((CC-DD),2);
        if(max < top){
            max = top;
        }
        temp = AA;
        AA = BB;
        BB =CC;
        CC =DD;
        DD = temp;
    }
    
    return max;
}