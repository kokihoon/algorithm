#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
vector<int> a[1001];
bool check[1001];

void dfs(int node) {
    check[node] = true;
    cout << node<< ' ';
    for(int i = 0; i < a[node].size(); i++) {
        int next = a[node][i];
        if(check[next] == false) {
            dfs(next);
        }
    }
}

void bfs(int start) {
    queue<int> q;
    memset(check, false, sizeof(check));

    check[start] = true;
    q.push(start);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << ' ';
        for(int i = 0; i < a[node].size(); i++) {
            int next = a[node][i];
            if(check[next] == false) {
                check[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    int n, m, start;
    cin >> n >> m >> start;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    for(int i = 1; i <= n; i++) {
        sort(a[i].begin(), a[i].end());
    }

    dfs(start);
    cout << '\n';
    bfs(start);
    return 0;
}


// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <stack>
// #include <queue>

// using namespace std;

// struct graph{
//     int left;
//     int right;
// };
// int main() {

//     int   N, M, V;
//     int left, right;
//     stack< int > st;
//     cin >> N >> M >> V;
//     vector<graph> vec(N+1);

//     for(int i = 0; i < N+1; i++) {
//         vec[i].right = 0;
//         vec[i].left = 0;
//     }

//     for(int i = 0; i < M; i++) {
//         cin >> left >> right;
//         if(vec[left].left == 0 && vec[right].left == 0) {
//             vec[left].left = right;
//             vec[right].left = left;
//         }
//         else if(vec[left].left == 0 && vec[right].left != 0){
//             vec[left].left = right;
//             vec[right].right = left;
//         }
//         else if(vec[left].left != 0 && vec[right].left == 0){
//             vec[left].right = right;
//             vec[right].left = left;
//         }
//         else {
//             vec[left].right = right;
//             vec[right].right = left;
//         }
//     } 
//     for(int i = 0; i < N+1; i++) {
//         cout << vec[i].left << vec[i].right<<'\n';
//     }
//     st.push(V);
//     cout << V << ' ';
//     while(st.size() != 0) {
//         if(vec[V].left > vec[V].right){
//             if(vec[V].right != 0) {
//                 right = vec[V].right;
//                 st.push(right);
//                 cout << right << ' ';
//                 vec[V].right = 0;
//                 if(vec[right].right == V){
//                     vec[right].right = 0;
//                 }else{
//                     vec[right].left = 0;
//                 }
//                 V = right;
//             }
//             else {
//                 st.pop();
//             }
//         }
//         else if(vec[V].left < vec[V].right) {
//             if(vec[V].left != 0) {
//                 left = vec[V].left;
//                 st.push(left);
//                 cout << left << ' ';
//                 vec[V].left = 0;
//                 if(vec[left].left == V){
//                     vec[left].left = 0;
//                 }else{
//                     vec[left].right = 0;
//                 }
//                 V = left;
//             }
//             else {
//                 st.pop();
//             }
//         }
//         else {
//             st.pop();
//         }
//     }
//     return 0;
// }