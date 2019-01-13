#include <iostream>
#include <string>
using namespace std;

int main(){

    string A, B, C, D;

    cin >> A >> B >> C >>D;
    string sum = "";
    A += B;
    C += D;
    reverse(A.begin(), A.end());
    reverse(C.begin(), C.end());
    if(A.length() > C.length()) {
        int carry = 0;
        for(int i = 0; i < C.length(); i++) {

            int a = A.at(i) - '0';
            int c = C.at(i) - '0';

            a = a + c + carry;
            carry = 0;
            if(a >= 10) {
                carry = 1;
                a -= 10;
                sum +=to_string(a);
            }
            else {
                sum +=to_string(a);
            }
        }
        for(int i = C.length(); i <A.length(); i++) {

            int a = A.at(i) - '0';
            a += carry;

            carry = 0;
            if(a >= 10) {
                carry = 1;
                a -= 10;
                sum+=to_string(a);
            }
            else {
                sum +=to_string(a);
            }
        }
        if(carry == 1) {
            sum += '1';
        }
    }else{
        int carry = 0;
        for(int i = 0; i < A.length(); i++) {

            int a = A.at(i) - '0';
            int c = C.at(i) - '0';

            a = a + c + carry;
            carry = 0;
            if(a >= 10) {
                carry = 1;
                a -= 10;
                sum +=to_string(a);
            }
            else {
                sum +=to_string(a);
            }
        }
        for(int i = A.length(); i <C.length(); i++) {

            int a = C.at(i) - '0';
            a += carry;

            carry = 0;
            if(a >= 10) {
                carry = 1;
                a -= 10;
                sum+=to_string(a);
            }
            else {
                sum +=to_string(a);
            }
        }
        if(carry == 1) {
            sum += '1';
        }
    }
    reverse(sum.begin(), sum.end());
    cout << sum << endl;
    return 0;
}