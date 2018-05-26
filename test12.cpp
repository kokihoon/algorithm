#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n, k, j, d, count =0, num = 5,po = 0;
    vector<int> v;

    cin >> n >> d >> k >> j;
    v.reserve(n);
    if(d == 1){
        for(int i = 1; i <= n; i++) {
            v.push_back(i);
        }
    }
    else{
        for(int i = n ; i > 0; i--) {
            v.push_back(i);
        }
    }

    while(v.size() != 1){
        // cout << v.at(k);
        v.erase(v.begin() + k-2);
        po = k;
        k += j;
        k += po;
        while(k > v.size()){
            k-=v.size();
        }
    }
  
    cout << v.back() << '\n';
    return 0;
}