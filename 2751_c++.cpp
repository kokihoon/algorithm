#include <iostream>
#include <algorithm>
using namespace std;

int a[1000001];

int main() {
    int num, num1, i = 0;
    cin >> num;

    for(int j = 0; j < num; j++) {
        cin >> a[j];
    }
    sort(a, a+num);
    for(int j = 0; j < num; j++) {
        cout << a[j]<<'\n';
    }
    
}