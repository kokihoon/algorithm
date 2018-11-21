#include <iostream>

using namespace std;


int main() {
    int N;
    int num[40][2];

    num[0][0] = 1;
    num[0][1] = 0;
    num[1][0] = 0;
    num[1][1] = 1;

    for(int i = 2; i <= 40; i++) {
        num[i][0] = num[i-1][0] + num[i-2][0];
        num[i][1] = num[i-1][1] + num[i-2][1];
    }

    cin >> N;
    while(N--) {
        int temp;
        cin >> temp;
        cout << num[temp][0] << " " << num[temp][1] << endl;
    }
    return 0;
}