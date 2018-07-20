#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool check[1001];
vector<int> vec[1001];

int dfs(int node) {
    int next;
    check[node] = true;
    for(int i = 0; i < vec[node].size(); i++) {
        next = vec[node][i];
        if(check[next] == false) {
            dfs(next);
        }
    }
    return 0;
}

int main() {

    int T, num,N;
    cin >> T;
    int count =0;
    while(T--) {
        cin >> N;
        for(int i = 1; i <= N; i++) {
            cin >> num;
            vec[i].push_back(num);
        }
        for(int i = 1; i <= N; i++) {
            if(check[i] == false) {
                dfs(i);
                count++;
            }
        }

        cout << count<< '\n';
        for(int i = 1 ; i <=N;i++) {
            check[i] = false;
            vec[i].clear();
        }
        count = 0;
    }
    return 0;
}