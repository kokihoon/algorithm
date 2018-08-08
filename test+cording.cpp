#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    long n;
    int count = 0;
    cin >> n;
      int *a;

    a = (int *)malloc(sizeof(int) *50000000);






    for (int i = 2; i <= 50000000; i++) {

        a[i] = i;

    }
    for (int i = 2; i <= sqrt(50000000); i++) { 

        if (a[i] == 0) // 이미 체크된 수의 배수는 확인하지 않는다

            continue;

        for (int j = i + i; j <= 50000000; j += i) { // i를 제외한 i의 배수들은 0으로 체크
            a[j] = 0;
        }

    }


    // print

    for (int i = 2; i <= 50000000; i++) {

        if (a[i] != 0){
            count++;
            if(count == n) {
                cout << a[i] <<'\n';
            }
        }
    }
    return 0;
}