#include <iostream>
#include <string>

using namespace std;
int dp[5001];

int main() {

    int num;
    string str;
    cin >> str;

    dp[0] = 1;
    for(int i = 1; i <= str.length(); i++) {
        int num = str.at(i-1)-'0';
        if(num > 0 && num <= 9) {
            dp[i] += dp[i-1];
            dp[i] %= 1000000;
        }
        if(i > 1) {
            num = (str.at(i-2) - '0')*10 + str.at(i-1)-'0';
            if(num >=10 && num <= 26) {
                dp[i] += dp[i-2];
                dp[i] %= 1000000;
            }  
        }
    }
    
    cout << dp[str.length()] << endl;
    

    return 0;
}