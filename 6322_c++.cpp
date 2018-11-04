#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c, count = 1;
    double answer = 0;
    while(true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        if( a == 0 || b == 0 || c == 0) {
                printf("Triangle #%d\n", count++);
                cout << "Impossible." << endl;
                printf("\n");
                continue;          
        }
        if(a == -1) {
            if(b == 0 || c == 0) {
                printf("Triangle #%d\n", count++);
                cout << "Impossible." << endl;
                printf("\n");

                continue;
            }
            answer = sqrt(pow(c,2) - pow(b,2));
            if(answer > 0) {
                printf("Triangle #%d\n", count++);
                printf("a = %0.3f\n", answer);
                printf("\n");

            }
            else {
                printf("Triangle #%d\n", count++);
                cout << "Impossible." << endl;
                printf("\n");

                continue;
            }
        }
        else if(b == -1) {
            if(a == 0 || c == 0) {
                printf("Triangle #%d\n", count++);
                cout << "Impossible." << endl;
                printf("\n");

                continue;
            }
            answer = sqrt(pow(c,2) - pow(a,2));
            if(answer > 0) {
                printf("Triangle #%d\n", count++);
                printf("b = %0.3f\n", answer);
                printf("\n");

            }
            else {
                printf("Triangle #%d\n", count++);
                cout << "Impossible." << endl;
                printf("\n");

                continue;
            }
        }
        else if(c == -1) {
            if(a == 0 || b == 0) {
                printf("Triangle #%d\n", count++);
                cout << "Impossible." << endl;
                printf("\n");

                continue;
            }
            answer = sqrt(pow(b,2) + pow(a,2));
            if(answer > 0) {
                printf("Triangle #%d\n", count++);
                printf("c = %0.3f\n", answer);
                printf("\n");

            }
            else {
                printf("Triangle #%d\n", count++);
                cout << "Impossible." << endl;
                printf("\n");

                continue;
            }
        }

    }

    return 0;
}