#include <iostream>
using namespace std;
int check[1000000];

int pow(int A, int P) {
    int ans = 1;
    for(int i = 0; i < P; i++) {
        ans *= A;
    }
    return ans;
}
int next(int A, int P) {

    int ans = 0;
    while(A> 0) {
        ans +=pow(A%10, P);
        A /= 10;
    }
    
    return ans;
}
int length(int A, int P, int cnt) {
    if(check[A] != 0) {

        return check[A]-1;
    }
    check[A] = cnt;
    int b = next(A,P);
    return length(b, P, cnt+1);
}
int main() {

    int A, P, ans;

    cin >> A >> P;
    cout <<  length(A, P, 1) << '\n';
    return 0;
}