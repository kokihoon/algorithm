#include <iostream>

using namespace std;

int main(){

    int num;
    int a, b;
    char c;
    cin >> num;
    while(num--) {
        scanf("%d%c%d", &a,&c, &b);

        cout << a + b<< '\n';
    }
    return 0;
}