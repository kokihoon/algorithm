#include <iostream>

using namespace std;
 
int n;
int a[1005];
int dp[1005];

int main() {
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    for(int i=1;i<=n;i++){
        dp[i]=1005;
    }

    dp[1]=0;

    for(int i=1;i<=n;i++){

        if(dp[i]==1005){
            continue;
        }

        for(int j=i+a[i];j>i;--j){
            dp[j]=min(dp[j],dp[i]+1);
        }
    }
    if(dp[n] > 1000) {
        cout << -1<<'\n';
        return 0;
    }
    
    cout <<dp[n]<<'\n';
    return 0;
}

// #include <iostream>
// #include <algorithm>

// using namespace std;
// int a[1001];

// int go(int node, int count, int num, int min) {

//     if(num <= node) {
//         if(min > count) {
//             min = count;
//             return min;
//         }
//     }
//     if(count > min) {
//         return min;
//     }

//     else if(a[node] == 0 && node < num) {
//         return min;
//     }

//     for(int i = 1; i <= a[node]; i++) {
//         cout << min << '\n';
//         min = go(node+i, count+1, num, min);
//     }
//     if(min == 100001) {
//         return -1;
//     }
//     return min;
// }
// int main() {
//     int num, count = 0;
//     int min = 100001;
//     cin >> num;

//     for(int i = 0; i < num; i++) {
//         cin >> a[i];
//     }
//     min = go(0, count, num, min);
//     cout << min<<'\n';
//     return 0;
// }