#include <iostream>

using namespace std;

int main() {

    int N, T, count = 0, sum = 0;
    int n[51];
    cin >> N >> T;

    for(int i =0; i < N; i++) {
        cin >> n[i];
    }

    for(int i = 0; i < N; i++) {
        if(sum + n[i] <= T) {
            sum += n[i];
            count++;
        }
        else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}