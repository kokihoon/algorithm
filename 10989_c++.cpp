#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[10001];
    int num;
    cin >> num;
    int temp = 0;
    for(int i = 0; i < num; i++) {
        cin >> temp;
        a[temp] += 1;
    }

    for(int i = 1; i <= 10000; i++) {
        if(a[i] > 0){
            for(int j=0; j < a[i]; j++){
                cout << i << '\n';
            }
        }
    }
    return 0;
}