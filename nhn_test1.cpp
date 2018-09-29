#include <iostream>

using namespace std;

int main() {
    int N[1001] = {0,}, check = 0;
    int N_front[1001], N_middle[1001], N_end[1001];

    int NUM[1001] = {0, };
    int C, P;

    cin >> C;
    cin >> P;

    for(int i = 0; i < P; i++) {
        cin >> N[i];
    }
    for(int i = 0; i < C; i++) {
        NUM[i] = i+1;
    }
    for(int i = 0; i < P; i++) {    
        check = C;
        while(N[i]*2 < check) {
            for(int j = 0; j < N[i]; j++) {
                N_front[j] = NUM[j];
            }

            for(int j = 0; j < check-2*N[i]; j++) {
                N_middle[j] = NUM[N[i]+j];
            }
            for(int j = 0; j < check-2*N[i]; j++){
                NUM[j] = N_middle[j];
            }
            int k = 0;
            for(int j = check-2*N[i]; N_front[k]!=0; j++) {
                NUM[j] = N_front[k++];
            }

            check = check- 2*N[i];

            for(int j = 0; j < 1001; j++) {
                N_front[j] = 0;
                N_middle[j] = 0;
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        cout << NUM[i] << endl;
    }
    
    return 0;
}