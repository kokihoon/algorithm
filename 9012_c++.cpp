#include <iostream>
#include <stack>

using namespace std;


bool vailds(string s) {
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            cnt++;               
        }
        else if(s[i] == ')') {
            cnt--;
        }

        if(cnt < 0) {
            return false;
        }
    }

    if(cnt != 0) {
        return false;
    }
    return true;
}

int main() {

    int num;
    string s;
    cin >> num;

    while(num--) {
        cin >> s;
        if(vailds(s)) {
            cout << "YES" << '\n';

        }
        else {
            cout << "NO" << '\n';
        }

    }
    return 0;
}