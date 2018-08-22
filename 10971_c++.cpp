#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int N, min= 2147483647, count = 0,next, prev;
    cin >> N;
    int a[11][11];
    vector<int> vec(N);
    for(int i=0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        vec[i] = i;
    }
    do {
        bool isTrue = true;
        for(int i = 0; i < N-1; i++) {
            prev = vec[i];
            next = vec[i+1];
            if(a[prev][next] == 0) {
                isTrue = false;
            }
            count += a[prev][next];
        }
        if(isTrue && a[vec[N-1]][vec[0]] != 0) {
            count += a[vec[N-1]][vec[0]];
            if(count < min) {
                min = count;
            }
        }
        count = 0;
    }while(next_permutation(vec.begin(), vec.end()));
    cout << min << '\n';
    return 0;
}
