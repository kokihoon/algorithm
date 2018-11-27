#include <iostream>

using namespace std;

int main() {
    int year_1, month_1, day_1;
    int year_2, month_2, day_2;

    int man = 0, korea, year;

    cin >> year_1 >> month_1 >> day_1;
    cin >> year_2 >> month_2 >> day_2;
    //man
    if(year_1 < year_2) {
        if(month_1 > month_2) {
            man = year_2 - year_1-1;
        }
        else if(month_1 == month_2) {
            if(day_1 > day_2) {

            man = year_2 - year_1-1;
            }
            else {
                man = year_2 - year_1;
            }
        }
        else {
            man = year_2 - year_1;
        }
    }
    else {
        man = 0;
    }

    //korea
    if(year_1 < year_2) {
        korea = year_2 - year_1+1;
    }
    else {
        korea = 1;
    }

    //year
    year = korea -1;
    cout << man << endl;        
    cout << korea << endl;
    cout << year << endl;
    return 0;
}