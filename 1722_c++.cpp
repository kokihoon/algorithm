#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int N, count, order = 0, det= 0;
    cin >> N;

    vector<int> v(N), ans(N);

    for(int i = 0; i < N; i++) {
        v[i] = i+1;
    }    

    cin >> count;
    if(count == 1) {
        cin >> order;
        order-=1;
        while(order--) {
            next_permutation(v.begin(), v.end());
        }
        for(int i = 0 ; i < N; i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
        return 0;
    }
    if(count == 2) {
        for(int i = 0; i < N; i++) {
            cin >> ans[i];
        }

        while(1) {
            order+=1;
            if(!next_permutation(v.begin(), v.end())){
                break;
            }
            for(int i = 0; i < N; i++) {
                if(ans[i] == v[i]) {
                    det++;
                }
            }
            if(det == N) {
                cout << order+1 << '\n';
                return 0;
            }
            else {
                det = 0;
            }

        }
    }
    return 0;
} 

// #include <iostream>
// #include <vector>
// using namespace std;
// long long f[21] = {1};
// bool c[21];
// int main() {
//     for (int i=1; i<=20; i++) {
//         f[i] = f[i-1] * i;
//     }
//     int n;
//     cin >> n;
//     int what;
//     cin >> what;
//     if (what == 2) {
//         vector<int> a(n);
//         for (int i=0; i<n; i++) {
//             cin >> a[i];
//         }
//         long long ans = 0;
//         for (int i=0; i<n; i++) {
//             for (int j=1; j<a[i]; j++) {
//                 if (c[j] == false) {
//                     ans += f[n-i-1];
//                 }
//             }
//             c[a[i]] = true;
//         }
//         cout << ans+1 << '\n';
//     } else if (what == 1) {
//         long long k;
//         cin >> k;
//         vector<int> a(n);
//         for (int i=0; i<n; i++) {
//             for (int j=1; j<=n; j++) {
//                 if (c[j] == true) continue;
//                 if (f[n-i-1] < k) {
//                     k -= f[n-i-1];
//                 } else {
//                     a[i] = j;
//                     c[j] = true;
//                     break;
//                 }
//             }
//         }
//         for (int i=0; i<n; i++) {
//             cout << a[i] << ' ';
//         }
//         cout << '\n';
//     }
//     return 0;
// }