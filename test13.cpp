#include <iostream>

using namespace std;

int main() {

    int x1[1][4];
    int x2[1][4];
    int x3[1][4];
    long num[1000][1000];
    int x , y;
    int sum =0;

    cin >> x1[0][0] >> x1[0][1] >> x1[0][2] >> x1[0][3] >> x2[0][0] >> x2[0][1] >> x2[0][2] >> x2[0][3] >> x3[0][0] >> x3[0][1] >> x3[0][2] >> x3[0][3];

    for(long i =0; i < 1000; i++)  {
        for(long j = 0; j < 1000; j++) {


            if(i >= x2[0][0] and j >=x2[0][1]){
                if(i <= x2[0][2] and i <= x2[0][3]){
                    num[i][j] = 2;
                }
            }
            if(i >= x3[0][0] and j >=x3[0][1]){
                if(i <= x3[0][2] and i <= x3[0][3]){
                    num[i][j] = 3;
                }
            }
            if(i >= x1[0][0] and j >=x1[0][1]){
                if(i <= x1[0][2] and i <= x1[0][3]){
                    num[i][j] = 1;
                }
            }
        }
    }
    for(long i = x1[0][0]; i < x1[0][2]; i++) {
        for(long j = x1[0][1]; j < x1[0][3]; j++) {
            if(num[i][j] == 1) {
                sum += 1;
            }
        }
    }
    cout << sum <<'\n';

    return 0;
}