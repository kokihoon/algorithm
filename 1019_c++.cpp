#include <iostream>
#include <algorithm>

using namespace std;
int a[10];

// void recursive(long num) {
//     while(num>0) {
//         a[num%10] +=1;
//         num /=10;
//     }
// }
int main() {

    long num;
    cin >> num;
    for(int i = 1; i <= num; i++) {
        if(i < 10){
            a[i] += 1;
        }
        else{
            int n = i;
            while(n>0) {
                a[n%10] +=1;
                n /=10;
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}