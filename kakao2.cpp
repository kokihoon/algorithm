#include <iostream>
#include <cmath>

using namespace std;

long long num[502];
int main() {

    long long a, b;
    double min =1000000, value = 0, value1 = 0;
    cin >> a >> b;

    for(long long i = 1; i <= a; i++) {

        cin >> num[i];
    }

    for(long long i = 1; i <= a-b+1; i++) {
        for(long long j = i; j <= b+i-1; j++) {
            value += num[j];
        }
        value /= b;
        for(long long j = i; j <= b+i-1; j++) {
            if(num[j] > value) {
                value1 += ((num[j] - value)*(num[j] - value));

            }
            else {
                value1 += ((value - num[j])*(value - num[j]));
            }

        }
        value1 = value1/b;

        value1 = sqrt(value1);


        if(value1 < min) {
            min = value1;
         }
        cout << value1 << '\n';
        value = 0;
        value1 = 0;
    }
    
    cout.precision(11);
    cout << min << endl;
    return 0;
}