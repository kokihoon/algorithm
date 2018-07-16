#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> a[1001];
bool check[1001];

void dfs(int node) {
    check[node] = true;
    for(int i = 0; i < a[node].size(); i++) {
        int next = a[node][i];
        if(check[next] == false) {
            dfs(next);
        }
    }
}

int main() {

    int N, M, count = 0;

    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        int U, V;
        cin >> U >> V;
        a[U].push_back(V);
        a[V].push_back(U);
    }

    for(int i = 1; i <=N; i++) {
        if(check[i] == false) {
            dfs(i);
            count += 1;
        }
    }
    
    cout << count <<'\n';
    return 0;
}