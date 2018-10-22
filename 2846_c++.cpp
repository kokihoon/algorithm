#include <iostream>

using namespace std;

int main() {
    int num[1001] = {0, };
    int N, max = 0, first_num = 0, data, second_num = 0;
    bool check = true, first = true, second = false;

    cin >> N;

    for(int i = 0; i < N; i++) {

        cin >> num[i];
    }
    first_num = num[0];
    for(int i = 1; i < N; i++) {
        if(first == false) {
            first_num = num[i-1];
            first = true;
        }
        if(num[i] > num[i-1]) {
            second_num = num[i];
            second = true;
        }
        if(num[i] <= num[i-1] || i == N-1) {
            if(second_num == 0 && i == N-1) {
                cout << "0" << endl;
                return 0;
            }
            data = second_num - first_num;
            if(data > max) {
                max = data;
            }
            first = false;
            second = false;
        }
    }

    cout << max << endl;



    return 0;
}