#include <iostream>

using namespace std;
int vet[200], answer[3];

int main() {
    int i = 0,num =1, count, num1, j = 0, num2, k, carry = 0;
    while(i++ < 1000){
        
        if(num > 1000 and num < 10000) {
            if(num == 1991 or num == 2992 or num == 3993 or num == 4994 or num == 5995 or num == 6996 or num == 7997 or num == 8998) {
                num += 11;
                vet[i] = num;
            }
            else if(num == 9999) {
                break;
            }
            else {
                num += 110;
                vet[i] = num;
            }
        }
        if(num > 100 and num < 1000){
            if(num == 191 or num == 292 or num == 393 or num == 494 or num == 595 or num == 696 or num == 797 or num == 898) {
                num += 11;
                vet[i] = num;
            }
            else if(num == 999) {
                num += 2;
                vet[i] = num;
            }
            else {
                num += 10;
                vet[i] = num;
            }
        }

        if(num > 10 and num < 100) {
            if(num == 99){
                num += 2;
                vet[i] = num; 
            }
            else {
                num += 11;
                vet[i] = num;
            }
        }
 
        if(num == 10) {
            num += 1;
            vet[i] = num;
        }
        if(num <10) {
            vet[i] = num++;
        }
        
    }
    cin >> count;
    while(count--) {
        cin >> num1;
        for(i = 199; i >= 0; i--) {
            if(vet[i] <= num1) {
                cout << vet[i] << '\n';
                num1 = num1 - vet[i];
                if(j == 5) {
                    j = 0;
                    carry = 1;
                    break;
                }
                if(num1 == 0) {

                    cout << j-1 << ' ';
                    for(k = 1; k <j; k++){
                        cout << answer[k] << ' ';
                    }
                    cout << '\n';
                    j = 0;
                    break;
                }

            }
        }
        if(carry == 1) {
            carry= 0;
            cout << '0'<<'\n';
        }
    }
    return 0;
}