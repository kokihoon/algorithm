#include <iostream>
#include <vector>

#include <algorithm>
using namespace std;

// int vec[100001];
// bool check[100001];
int a[100001];
int d[100001];
int s[100001];
int dfs(int x, int cnt, int &step) {
    if (d[x] != 0) {
        if (step != s[x]) {
            return 0;
        }
        return cnt-d[x];
    }
    d[x] = cnt;
    s[x] = step;
    return dfs(a[x], cnt+1, step);
}

// int dfs(int node, int T, int red) {
//     int count = 1;
//     if(T == 1) {
//         red = node;
//     }
//     check[node] = true;
//     int next = vec[node];
//     if(check[next] == false) {
//         count = dfs(next, 2, red);
//         if(count == 0) {
//             return 0;
//         }
//     }
//     else {
//         if(next == red) {
//             return 0;
//         }
//     }
//     if(count == 1) {
//         check[node] = false;
//         return 1;
//     }

//     return 1;
// }

int main() {

    int T, num, click, count = 0;
    cin >> T;

    while(T--) {
        cin >> num;
        for(int i = 1; i <= num; i++) {
            // check[i] = false;
            // vec[i] = 0;

            cin >> click;
            a[i] = click;
            d[i] = 0;
            s[i] = 0;
            // vec[i] = click;
        }

        for(int i = 1; i <= num; i++) {
            // if(check[i] == false)
            if(d[i] == 0)
                count += dfs(i, 1, i);
        }
        cout << num -count <<'\n';
        count = 0;
    }

    return 0;
}
