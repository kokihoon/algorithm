#include <iostream>

using namespace std;

bool broken[10];

int possible(int c) {
    if(c == 0) {
        if(broken[0]) {
            return 0;
        }
        else {
            return 1;
        }
    }

    int len = 0;
    while(c > 0) {
        if(broken[c%10]) {
            return 0;
        }
        len += 1;
        c /= 10;
    }
    return len;
}
int main() {

    int N;
    cin >> N;
    int M;
    cin >> M;

    for(int i = 0; i < M; i++) {
        int x;
        cin >> x;
        broken[x] = true;
    }

    int ans = N - 100;
    if(ans < 0) {
        ans = - ans;
    }

    for(int i = 0; i <= 1000000; i++) {
        int c = i;
        int len = possible(c);
        if(len > 0) {
            int press = c - N;
            if(press < 0) {
                press = -press;
            }
            if(ans > len + press) {
                ans = len + press;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}