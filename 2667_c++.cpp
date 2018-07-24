#include <iostream>
#include <algorithm>
using namespace std;


int a[28][28];
int ans[10000];
int co = 0;

int dfs(int i, int j, int co) {
    a[i][j] = 0;

    if(a[i-1][j] != 0 && i > 0) {
        ans[co]++;
        // a[i-1][j] = 0;
        dfs(i-1, j, co);
    }
    if(a[i][j+1] != 0) {
        ans[co]++;
        // a[i][j+1] = 0;
        dfs(i, j+1, co);
    }
    if(a[i+1][j] != 0) {
        ans[co]++;
        // a[i+1][j] = 0;
        dfs(i+1, j, co);
    }
    if(a[i][j-1] != 0 && j > 0) {
        ans[co]++;
        // a[i][j-1] = 0;
        dfs(i, j-1 , co);
    }
    return 1;
}

int main() {
    int N, count = 0;
    string num;
    cin >> N;
    
    for(int i = 1; i <= N;i++){
        cin >> num;
        for(int j = 1; j <= N; j++) {
            int change = int(num[j-1])- 48;
            a[i][j] = change;
        }
    }
    
    for(int i = 1; i <= N;i++){
        for(int j = 1; j <= N; j++) {
            if(a[i][j] != 0) {

                count+= dfs(i,j, co);
                co++;
            }
        }
    }
    cout << count << '\n';
    sort(ans, ans+count);
    for(int i = 0; i < count;i++) {

        cout << ans[i]+1<<'\n';
    }
    return 0;
}