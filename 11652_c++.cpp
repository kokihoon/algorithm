#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    long long n;
    int num;
    cin >> num;
    map<long long, int> m;
    while(num--) {
        cin >> n;
        m[n] +=1;
    }
    int max = 0;
    long long ans = 0;
    for(auto &p : m) {
        if(p.second > max) {
            max = p.second;
            ans = p.first;
        }
        if(p.second == max && p.first < ans) {
            ans = p.first;
        }
    }
    cout << ans<<'\n';
    return 0;
}