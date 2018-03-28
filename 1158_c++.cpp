#include <iostream>
#include <queue>

using namespace std;

queue<int> qu, qu1;


int main() {

    int num, num1;

    scanf("%d %d", &num, &num1);
    for(int i = 1; i <= num; i++) 
    {
        qu.push(i);
    }
    int i = 1;
    while(qu.size() != 0) {
        if(i == num1) {
            int nu = qu.front();
            qu.pop();
            qu1.push(nu);
            i = 1;
        }
        else {
            i++;
            int nu = qu.front();
            qu.pop();
            qu.push(nu);
        }
    }
    cout << '<' << qu1.front();
    qu1.pop();
    for(int i = 1; i < num; i++) {
        cout << ", "<< qu1.front();
        qu1.pop();
    }
    cout << '>';
    return 0;
}