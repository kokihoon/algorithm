#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX = 100111;

vector<int> vec[MAX];
bool check[MAX];
int parent[MAX];

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N-1; i++) {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a); 
    }
    check[1] = true;
    queue<int> q;
    q.push(1);
    parent[1] = 0;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        for(int i = 0; i < vec[x].size(); i++) {
            int y = vec[x][i];
            if(!check[y]) {
                check[y] = true;
                parent[y] = x;
                q.push(y);
            }
        }
    }
    for(int i = 2; i <= N; i++) {
        cout << parent[i] << '\n';
    }

    return 0;
}