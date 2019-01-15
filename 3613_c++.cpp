#include <iostream>

using namespace std;

int main() {

    string str, answer="";
    int check_ = 0, checkA= 0, check_sum = 0;

    cin >> str;
    for(int i =0 ;i < str.length(); i++) {
        if(str[i] == '_') {
            if(i > 0 && str[i-1] == '_') {
                check_sum = 3;
            }else
                check_ = 1;
        } 
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            checkA = 2;
        }
        if(i == 0 && (str[i] =='_' || (str[i] >='A' && str[i]<='Z'))) {
            check_sum = 3;
        }
        if(str[str.length()-1] =='_') {
            check_sum = 3;
        }

    }
    check_sum = check_ + checkA + check_sum;
    if(check_sum == 1) {
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '_') {
                i +=1;
                answer += (str[i]+('Z'-'z'));
            }else
                answer+=str[i];    
        }
        cout << answer << endl;
    }
    else if(check_sum == 2) {
        for(int i = 0; i <str.length(); i++) {
            if(i == 0 && str[i] >='A' && str[i] <='Z') {
                answer += (str[i]-('Z'-'z'));
            }
            else if(str[i] >='A' && str[i] <='Z') {
                answer += "_";
                answer += (str[i]-('Z'-'z'));
            } else
                answer +=str[i];
        }
        cout << answer << endl;

    } 
    else if(check_sum == 0) {
        cout << str << endl;
    }
    else {
        cout << "Error!" << endl;
    }

    return 0;
}