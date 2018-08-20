#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int N, max = 0, count = 0, test;

    cin >> N;
    vector<int> vec(N);

    for(int i = 0; i < N; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    do {
        for(int i = 1; i < N; i++) {
            test = vec[i]-vec[i-1];
            if(test >0){
                count += test;
            }else {
                test = -test;
                count += test;
            }

        }
        if(max < count){
            max = count;
        }
        count = 0;
    }
    while(next_permutation(vec.begin(), vec.end()));
    cout << max << '\n';
    return 0;
}