// you can use includes, for example:
#include <algorithm>
#include <iostream>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
using namespace std;
int solution(long long N);
int main(){
    long long N;
    cin >> N;
    cout <<solution(N)<<'\n';
    return 0;
}
int solution(long long N) {
    // write your code in C++14 (g++ 6.2.0)
    int count = 0;
    bool T = false;
    int max = 0;
    if(N == 1) {
        return 0;
    }
    while(true){
        if(N % 2 == 1){
            if(T==true){
                if(max < count){
                    max = count;
                    count = 0;
                }
            }
            T = true;
            if(N == 1) {
                return max;
            }
        }
        else {
            if(T == true) {
                count += 1;
            }
            if(N == 1) {
                return max;
            }
        }
        N /= 2;
    }
    return max;
}