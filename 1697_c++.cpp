#include <iostream>
#include <queue>

using namespace std;
const int MAX = 200000;
bool check[MAX+1];
int dist[MAX+1];

int main() {

    int Subin, sister;
    cin >> Subin >> sister;

    check[Subin] = true;
    dist[Subin] = 0;
    // if(Subin == sister){
    //     cout << dist[Subin] << '\n';
    // }
    queue<int> q;

    q.push(Subin);  
    while(!q.empty()){
        int now = q.front();
        q.pop();
        if(now -1 >= 0) {
            if(check[now-1] == false) {
                q.push(now-1);
                check[now-1] = true;
                dist[now-1] = dist[now] +1;
                // if(now -1 == sister) {
                //     cout << dist[now-1] << '\n';
                //     return 0;
                // }
            }
        }
        if(now + 1 < MAX) {
            if(check[now + 1] == false) {
                q.push(now+1);
                check[now+1] = true;
                dist[now+1] = dist[now] + 1;
                // if(now -1 == sister) {
                //     cout << dist[now-1] << '\n';
                //     return 0;
                // }
            }
        }
        if(now * 2 < MAX) {
            if(check[2*now] == false) {
                q.push(now*2);
                check[2*now] = true;
                dist[2*now] = dist[now] + 1;
                // if(now -1 == sister) {
                //     cout << dist[now-1] << '\n';
                //     return 0;
                // }
            }
        }
    }

    cout << dist[sister] << '\n';
    return 0;
}