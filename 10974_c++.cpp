#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int num;
    cin >> num;

    vector<int> n(num);
    for(int i = 1; i <= num; i++) {
        n[i-1] = i;
    }
    do{
        for(int i = 0; i < num; i++) {
            cout << n[i] << ' ';
        }

        cout << '\n';
    }while(next_permutation(n.begin(), n.end()));
    return 0;
}