#include <iostream>

using namespace std;

long long a[100] = {0,1};
// 시간복잡도 O(n)
int main() {
    int n;
    cin >> n;
    for (int i=2; i<=n; i++) {
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[n] << '\n';
    return 0;
} 

// 시간복잡도 O(n^2)
// #include <iostream>

// using namespace std;

// int fibonachi(int n) {
//     if(n <= 1) {
//         return n;
//     }
//     else {
//         return fibonachi(n-1) + fibonachi(n-2);
//     }
// }

// int main() {
//     int n, ans = 0;
//     cin >> n;

//     ans = fibonachi(n);
//     cout << ans << '\n';
//     return 0;
// }