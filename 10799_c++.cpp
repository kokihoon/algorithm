#include <iostream>

#include <stack>
using namespace std;

int main(){
    string s;
    stack<int> st;
    int sum = 0;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        st.push(i);
        if(s[i] == ')' ) {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            if(x-y == 1)
                sum += st.size();
            else
                sum += 1;
        }

    }
    cout << sum <<'\n';
    return 0;
}