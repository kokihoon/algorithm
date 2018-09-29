#include <iostream>

using namespace std;

int main() {

    int days, count = 0, my_money = 0, max = 0, max_count=0;
    int price[1001];

    cin >> days;
    
    for(int i = 0; i < days; i++) {
        cin >> price[i];
    }

    for(int i = 0; i < days; i++) {
        for(int j = i; j < days; j++) {
            if(max == price[j]) {
                max_count++;
            }
            if(max < price[j]) {
                max = price[j];
                max_count = 1;
            }
            if(price[i] < price[j]) {
                my_money -= price[i];
                count++;
                break;
            }


        }
        if(max == price[i] && max_count == 1 && count >0){
            my_money += (max*count);
            count = 0;
            my_money-=1;
        }
        max = 0;
        max_count = 1;
    }

    cout << my_money << endl;
    return 0;
}