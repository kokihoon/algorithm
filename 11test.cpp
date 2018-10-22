#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    int count = 1, j = 0, i = 0;
    while(i++ < A.size()){
        if(A[j] == -1) {
            break;
        }
        else{
            j = A[j];
            count++;
        }
    
    }
    // for(int i =0; i <A.size(); i++) {
    //     if(A[j] == -1) {
    //         break;
    //     }
    //     else{
    //         j = A[j];
    //         count++;
    //     }
    // }

    cout << count << endl;

}
int main() {

    vector<int> vec;

        vec.push_back(1);

    vec.push_back(4);
    vec.push_back(-1);
    vec.push_back(3);
    vec.push_back(2);

    solution(vec);

    return 0;
}