#include <iostream>
#include <string>

using namespace std;

int solution(string &A, string &B);

int main(){
    string A, B;
    
    cin >> A >> B;

    cout << solution(A, B) << '\n';

    return 0;
}

int solution(string &A, string &B){
    int alice = 0;
    int temp_alice = 0;
    int temp_bob = 0;
    for(int i = 0; i < A.length();i++) {
        if(A[i] == 'A'){
            temp_alice = 14;
        }
        else if(A[i] == 'K'){
            temp_alice = 13;
        }
        else if(A[i] == 'Q'){
            temp_alice = 12;
        }
        else if(A[i] == 'J') {
            temp_alice = 11;
        }
        else if(A[i] == 'T') {
            temp_alice = 10;
        }
        else if(A[i] > '2' and A[i] < '9'){
            temp_alice = int(A[i]);
        }

        if(B[i] == 'A') {
            temp_bob = 14;
        }
        else if(B[i] == 'K'){
            temp_bob = 13;
        }
        else if(B[i] == 'Q'){
            temp_bob = 12;
        }
        else if(B[i] == 'J') {
            temp_bob = 11;
        }
        else if(B[i] == 'T') {
            temp_bob = 10;
        }
        else if(B[i] > '2' and B[i] < '9'){
            temp_bob = int(B[i]);
        }
        if(temp_alice > temp_bob){
            alice += 1;
        }
    }
    return alice;
}