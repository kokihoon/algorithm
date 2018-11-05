#include <iostream>

using namespace std;

int main(){

    double answer = 0;
    cout << "n e" << endl;
    cout <<"- -----------" << endl;
    for(int i = 1; i < 11; i++) {
        double temp = 1;
        for(int j = 1; j < i; j++) {
            temp *= j;
        }
        temp = 1/temp;
        answer += temp;
        if(i < 3) {
            printf("%d %d\n", i-1, (int)answer);

        }
        else if(i == 3) {
            printf("%d %0.1f\n", i-1, answer);
        }
        else
            printf("%d %0.9f\n", i-1, answer);
    }
    return 0;
}