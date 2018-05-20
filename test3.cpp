#include <iostream>
#include <vector>

using namespace std;
int solution(vector<int> &A, int K, int L);
int main() {

    vector<int> A;
    int num=8;
    int num1, K, L;

    while(num--){
        cin >> num1;
        A.push_back(num1);
    }
    cin >> K >> L;

    cout <<solution(A, K, L) << '\n';

    return 0;
}

int solution(vector<int> &A, int K, int L) {
    int sum = 0, sum1 =0;

    int max = 0, max1 = 0;
    if(A.capacity() < K+L){
        return -1;
    }
    for(int i =0; i < A.capacity(); i++) {
        if(i+K+L > A.capacity()){
            break;
        }
        for(int j = i; j < K+i; j++) {
            sum += A.at(j);
        }
        if(max < sum){
            max = sum;
        }
        sum = 0;
        for(int j = K+i; j < L+K+i; j++) {
            sum1 += A.at(j);
        }
        if(max1 < sum1) {
            max1 = sum1;
        }
        sum1 = 0;
    }
    return max + max1;
}