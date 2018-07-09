#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int num;

    cin >> num;
    
    vector <pair<int, int> > vec(num);

    for(int i = 0; i < num; i++) {
        cin >> vec[i].second >> vec[i].first;
    }

    sort(vec.begin(), vec.end());

    for(int i = 0; i < num; i++) {
        cout << vec[i].second << ' ' << vec[i].first<<'\n';
    }


    return 0;
}