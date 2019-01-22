#include <iostream>
#include <string>
using namespace std;


int main()
{
    double P, B, A, t, D, F;
    cin >> P;
    
    while(P--) {
        int N;
        cin >> N >> D >> A >> B >> F;
        t = D/(A+B);
        printf("%d %.2f",N, t*F);
        
    }
    
}