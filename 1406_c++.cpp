#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<char> st_left, st_right;
    string s;
    int num;
    char ch;
    cin >> s;
    cin >> num;
    for(int i = 0; i < s.size(); i++) {
        st_left.push(s[i]);
    }
    while(num--) {
        cin >> ch;
        if(ch == 'L') {
            if(st_left.size() == 0) {

            }
            else {
                char ch1 = st_left.top();
                st_left.pop();
                st_right.push(ch1);
            }

        }
        else if(ch == 'D') {
            if(st_right.size() == 0) {

            }
            else {
                char ch1 = st_right.top();
                st_right.pop();
                st_left.push(ch1);
            }
        }
        else if(ch == 'B') {
            if(st_left.size() == 0) {

            }
            else {
                st_left.pop();
            }
        }
        else if(ch == 'P') {
            char ch1;
            cin >> ch1;
            st_left.push(ch1);
        }
    }
    while(st_left.size() !=0) {
        char ch1 = st_left.top();
        st_left.pop();
        st_right.push(ch1);

    }
    while(st_right.size() != 0) {
        char ch1 = st_right.top();
        st_right.pop();
        cout << ch1;
    }
    return 0;
}