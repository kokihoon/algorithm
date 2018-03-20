#include <iostream>

using namespace std;

int main() {

    int month[12]= {31, 28,31,30,31,30,31,31,30,31,30,31};
    int mon, day, sum = 0;
    cin >> mon >> day;
    
    for(int i = 0; i < mon-1; i++) {
        sum += month[i];
    }
    sum += day;
    int m = sum % 7;
    if(m == 0) {
        cout<<"SUN\n";
    }else if(m == 1) {
        cout <<"MON\n";
    }else if(m == 2) {
        cout << "TUE\n";
    }else if(m == 3) {
        cout << "WED\n";
    }else if(m == 4) {
        cout << "THU\n";
    }else if(m == 5) {
        cout << "FRI\n";
    }else {
        cout << "SAT\n";
    }

    return 0;
}