#include <iostream>

using namespace std;

int main(){

    int num;
    int a, b, i = 1;
    
    cin >> num;
    while(num--) {
        scanf("%d %d", &a, &b);

        cout << "Case #"<<i++<<": "<< a << " + " << b<< " = "<< a+b<<'\n';
    }
    return 0;
}