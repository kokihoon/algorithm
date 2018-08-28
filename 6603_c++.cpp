#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    while(true) {
        int N;

        cin >> N;
        if(N == 0) {
            break;
        }

        vector<int> a(N);
        for(int i = 0; i < N; i++) {
            cin >> a[i];
        }

        vector<int> b;

        for(int i = 0; i < N-6; i++) {
            b.push_back(0);
        }
        for(int i =0; i < 6; i++) {
            b.push_back(1);
        }

        vector< vector<int> > ans;

        do {
            vector<int> current;
            for(int i = 0; i < N; i++) {
                if(b[i] == 1) {
                    current.push_back(a[i]);
                }
            }
            ans.push_back(current);
        }while(next_permutation(b.begin(), b.end()));
        
        sort(ans.begin(), ans.end());
        for(auto &t : ans) {
            for(int i =0; i < t.size(); i++) {
                cout << t[i] << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}