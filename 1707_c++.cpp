#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool check[20001];
bool bet = false;
vector<int> vec[20001];

void dfs(int node) {
    check[node] = true;
    for(int i = 0; i < vec[node].size(); i++) {
        if(vec[node][i] != 0) {
            int next = vec[node][i];
            for(int j = 0; j < vec[next].size(); j++) {
                if(vec[next][j] == node) {
                    vec[next][j] = 0;
                    break;
                }
            }
            vec[node][i] = 0;
            if(next != 0) {
                if(check[next] == false) {
                    dfs(next);
                }
                else {
                    bet = true;
                    break;
                }
            }
        }
    }
}

int main() {

    int N, V, E, U, K;
    cin >> N;

    while(N--) {
        cin >> V >> E;
        for(int i = 1; i <= V; i++) {
            vec[i].clear();
            check[i] = false;
        }
        for(int i =0; i < E; i++) {
            cin >> U >> K;
            vec[U].push_back(K);
            vec[K].push_back(U);
        }
        for(int i = 1; i <=V; i++) {
            dfs(i);
        }
        if(bet == false){
            cout << "YES"<< '\n';

        }else {
            cout << "NO" << '\n';
        }

        bet = false;
    

    }

    return 0;
}

// #include <cstdio>
// #include <algorithm>
// #include <cstring>
// #include <vector>
// #include <queue>
// using namespace std;
// vector<int> a[20001];
// int color[20001];
// bool dfs(int node, int c) {
//     color[node] = c;
//     for (int i=0; i<a[node].size(); i++) {
//         int next = a[node][i];
//         if (color[next] == 0) {
//             if (dfs(next, 3-c) == false) {
//                 return false;
//             }
//         } else if (color[next] == color[node]) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     int t;
//     scanf("%d\n",&t);
//     while (t--) {
//         int n, m;
//         scanf("%d %d",&n,&m);
//         for (int i=1; i<=n; i++) {
//             a[i].clear();
//             color[i] = 0;
//         }
//         for (int i=0; i<m; i++) {
//             int u,v;
//             scanf("%d %d",&u,&v);
//             a[u].push_back(v);
//             a[v].push_back(u);
//         }
//         bool ok = true;
//         for (int i=1; i<=n; i++) {
//             if (color[i] == 0) {
//                 if (dfs(i, 1) == false) {
//                     ok = false;
//                 }
//             }
//         }
//         printf("%s\n",ok ? "YES" : "NO");
//     }
//     return 0;
// }