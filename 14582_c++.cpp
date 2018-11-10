#include <iostream>

using namespace std;

int main() {

    int O[9];
    int S[9];
    int O_score = 0;
    int S_score = 0;
    bool check = false;

    for(int i = 0; i < 9; i++) {
        cin >> O[i];
    }

    for(int i = 0; i < 9; i++) {
        cin >> S[i];
    }

    for(int i = 0; i < 9 ; i++) {
        O_score += O[i];
        if(O_score > S_score) {
            check = true;
        }
        S_score += S[i];

        if(i == 8 && check == true && O_score < S_score) {
            cout << "Yes" << endl; 
            return 0;
        }  

    }
    cout << "No" << endl;
    return 0;
}