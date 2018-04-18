#include <iostream>

using namespace std;

int main() {

    int d[100000] = {0, };
    int sum = 0;
    int num, max = 0;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin>>d[i];
    }
    max = d[0];
    for(int i = 0; i < num; i++) {

        if(d[i] >= 0) {
            if(sum >= 0)
                sum += d[i];
            else{
                sum = d[i];
            }
        }
        else {
            if(sum + d[i] > 0) {
                sum += d[i];
            }
            else {
                if(sum >= 0){
                    sum += d[i];
                }
                else if(sum <0){
                    if(sum > d[i]){

                    }
                    else {
                        sum = d[i];
                    }
                }
            }
        }

        if(max < sum) {
            max = sum;
        }
    }
    cout << max <<'\n';
    return 0;
}