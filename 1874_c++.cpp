#include <cstdio>
#include <iostream>


using namespace std;

int main() {
    int T[100000];
    int T1[100000];
    char T2[1000000];
    int T2_top = 0;
    int T1_top = -1;
    int count = 1;
    int num, max = 0;

    cin >> num;

    for(int i = 0; i < num; i++) {
        cin >> T[i];
    }

    for(int i = 0; i < num; i++) {
        while(1){
            if(T1_top == -1) {
                T1[++T1_top] = count++;
             //   cout << '+' << count << '\n';
                T2[T2_top++] = '+';
            }
            if(T1[T1_top] == T[i]) {
                T1[T1_top] = 0;
                T1_top -= 1;
                T2[T2_top++] = '-';
             //   cout << '-' << '\n';
                break;
            }
            if(T1[T1_top] < T[i]){
                T1[++T1_top] = count++;
              //  cout << '+'<< count << '\n';
                T2[T2_top++] = '+';
            }
            if(T1[T1_top] > T[i]){
                //cout << T1[T1_top]<< ' ' << T[i] << '\n';
                cout << "NO"<<'\n';
                return 0;
            }
        }
    }

    for(int i = 0; i < T2_top; i++) {
        cout << T2[i] << '\n';
    }

    return 0;
}