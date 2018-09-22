#include <iostream>

using namespace std;
int a[101][101] = {0,}, answer = 0;
int main() {

    int M, W, H, N;
    cin >> M;
    while(M--) {
        cin >> H >> W >> N;
        for(int i = 1; i <= W; i++) {
            
            for(int j = 1; j <= H; j++) {
                a[i][j] += 100*j+i;
                N--;
                if(N == 0) {
                    answer = a[i][j];
                    break;
                }
            }
            if(answer != 0) {
                break;
            }
        }

        cout << answer << endl;
        answer = 0;
        for(int i = 1; i <= W; i++) {
            for(int j = 1; j <= H; j++) {
                a[i][j] = 0;
            }
        }
    }
    return 0;
}