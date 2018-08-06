#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int num;
    cin >> num;

    vector<int> n(num);
    for(int i = 0; i < num; i++) {
        cin >> n[i];
    }

    if(next_permutation(n.begin(), n.end())){
        for(int i = 0; i < num; i++) {
            cout << n[i] << ' ';
        }
    }
    else {
        cout << "-1";
    }
    cout << '\n';
    return 0;
}