#include <iostream>

using namespace std;

int main() {

    int num, max, min;
    int a;
    int i = 0;
    cin >> num;
    while(num--) {
        cin >> a;
        if (i == 0) {
            i++;
            max = a;
            min = a;
        }
        else {
            if(max < a) {
                max = a;
            }
            if(min > a) {
                min = a;
            }
        }
    }
    cout << min << " " << max<<'\n';
    return 0;
}