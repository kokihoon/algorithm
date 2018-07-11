#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// bool change = false;
int a[500000];
// void swap(int* first, int* second) {
//     int temp;
//     temp = *first;
//     *first = *second;
//     *second = temp; 
// }
// int main() {
//     int n;
//     cin >> n;
//     int ans;

//     for(int i = 1; i < n+1; i++){
//         cin >> a[i];
//     }
//     for (int i=1; i<=n+1; i++) {
//         change = false;
//         for (int j=1; j<=n-i; j++) {
//             if (a[j] > a[j+1]) {
//                 change = true;
//                 swap(a[j], a[j+1]);
//             }
//         }
//         if (change == false) {
//             ans = i;
//             break;
//         }
//     }
//     cout << ans << '\n';

//     return 0;
// }
int main() {
    int num;
    cin >> num;
    vector<pair<int,int> > a(num);
    for (int i=0; i<num; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(),a.end());
    int ans = 0;
    for (int i=0; i<num; i++) {
        if (ans < a[i].second - i) {
            ans = a[i].second - i;
        }
    }
    cout << ans+1<<'\n';
    return 0;
}