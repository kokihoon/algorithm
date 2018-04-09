#include <iostream>

using namespace std;


int main() {
    int d[1001] = {0, };
    int num;
    scanf("%d", &num);

    d[1] = 1;
    d[2] = 3;
    for(int i = 3; i < 1001; i++) {
        d[i] = (d[i-1] + d[i-2]*2)%10007;
    }
    printf("%d\n", d[num]);
    return 0;
}