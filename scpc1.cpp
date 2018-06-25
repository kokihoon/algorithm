#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;
int N1[200000];
int main() {
    int T, test_case, carry = 0;
    vector< vector<int> > vec;
    long long N, K;
    


    cin >> T;

    for(test_case = 0; test_case < T; test_case++) {
        cin >> N >> K;
        for(int i = 0; i < N;i++) {
            cin >> N1[i];
        }
        vector<int> ve;
        ve.push_back(N1[0]);
        vec.push_back(ve);
        for(int i = 1; i < N; i++) {
            for(int j = 0; j < vec.size(); j++) {
                for(int k = 0; k < vec[j].size(); k++) {
                    if(abs(vec[j][k]- N1[i]) <= K){
                        break;
                    }
                    else {
                        carry = 1;
                        vec[j].push_back(N1[i]);
                        break;
                    }
                }
                if(carry == 1) {
                    break;
                }
            }
            if(carry == 0) {
                vector<int> ve;
                ve.push_back(N1[i]);
                vec.push_back(ve);
            }
            carry = 0;
        }
        cout << vec.size() << '\n';
        vec.clear();
        ve.clear();
    }
    return 0;
}