#include <iostream>
#include <stack>
#include <string>

using namespace std;

int solution(string &S);

int main() {
    string S = "13 DUP 4 POP 5 DUP + DUP + -";
    // string S = "13 DUP 4 POP 5 DUP + -";
    int num;
    
    num = solution(S);
    cout << num;
    return 0;
}

int solution(string &S) {
    stack<int> st;
    bool tre = false;
    bool dup = false;
    bool pop = false;
    string T ="";
    for(int i = 0; i < S.length(); i++) {
        if(S.at(i)== '1' or S.at(i)=='2' or S.at(i)=='3' or S.at(i)=='4' or S.at(i)=='5' or S.at(i)=='6' or S.at(i)=='7' or S.at(i)=='8' or S.at(i)=='9' or S.at(i) == '0') {
            T = T + S.at(i);
            tre = true;
        }
        else if(S.at(i) == 'D'){
            dup = true;
        }
        else if(S.at(i) == 'P') {
            pop = true;
        }
        else if(S.at(i) == 'O'){
            pop = false;
            if(st.empty()) {
                return -1;
            }
            st.pop();
        }
        else if(S.at(i) == 'U' and dup == true) {
            int num = st.top();
            st.push(num);
            dup = false;
        }
        else if(S.at(i) == 'P') {
            
        }
        if(tre == true and (S.at(i) == ' ' or i == S.length()-1)) {
            tre = false;
            int num = atoi(T.c_str());
            st.push(num);
            T = "";
        }
        else if(S.at(i) == '-'){
            int num1, num2;
            if(st.empty()){
                return -1;
            }
            num1 = st.top();
            st.pop();
            if(st.empty()){
                return -1;
            }
            num2 = st.top();
            st.pop();
            num1 -= num2;
            if(num1  < 0){
                return -1;
            }
            st.push(num1);
        }
        else if(S.at(i) == '+') {
           int num1, num2;
            if(st.empty()){
                return -1;
            }
            num1 = st.top();
            st.pop();
            if(st.empty()){
                return -1;
            }
            num2 = st.top();
            st.pop();
            num1 += num2;
            if(num1  < 0){
                return -1;
            }
            st.push(num1);            
        }
    }
    if(st.empty()){
        return -1;
    }
    int num3 = st.top();
    return num3;
}
