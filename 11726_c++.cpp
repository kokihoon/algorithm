#include <iostream>

using namespace std;

int dynamic_function(int num);
int d[1000] ={0, };

int main() {

    int num;

    cin >> num;
    d[1] = 1;
    d[2] = 2;
    for(int i = 3; i <=num; i++) {
        d[i] = (d[i-1] + d[i-2])%10007;
    }
    printf("%d\n", d[num]);
    return 0;
}