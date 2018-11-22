#include <iostream>

using namespace std;

int main() {

    int a, b, n, w;
    int x, y;
    bool check = false;
    cin >> a >> b >> n >> w;

    for(int i = 1; i < n; i++) {
        int j = n - i;
        if(j*a + b*i == w && check == false) {
            x = j;
            y = i;
            check = true;
        }
        else if(j*a + b*i == w && check == true) {
            check = false;
            break;
        }
    }

    if(check) {
        cout << x << " " << y << endl;
        return 0;
    }

    cout << "-1" << endl;



    return 0;
}