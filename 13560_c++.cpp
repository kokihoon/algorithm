#include <iostream>
#include <algorithm>

using namespace std;

int score[10001];

int main() {
    int n = 0, sum = 0, cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> score[i];
    }

    sort(score, score+n);
    for(int i = 0; i < n; i++) {
        cnt +=score[i];
        if(cnt < (i * (i + 1)/ 2)) {
            cout << "-1" << endl;
            return 0;
        }
    }

    if(cnt == n*(n-1)/ 2) {
        cout << "1" << endl;
    }
    else {
        cout << "-1" << endl;
    }
    return 0;
}