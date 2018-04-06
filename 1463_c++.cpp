#include <iostream>

using namespace std;

void x_3(int x, int count);
void x_2(int x, int count);
void x_1(int x, int count);

int min1 = 1000000;
int main() {
    int count = 0;
    int x;
    cin >> x;
    while(true) {

        if(x % 3 == 0) {
            x_3(x, count);
        }
        if(x % 2 ==0) {
            x_2(x, count);
        }
        
        x_1(x, count);
    
        break;
    }
    cout <<min1;
    return 0;
}

void x_3(int x,int count) {
    if(x == 1) {
        if(min1 > count) {
            min1 = count;
        }
    }
    if(x < 1) {
        return;
    }
    if(x % 3== 0) {
        count++;
        x = x / 3;
        if(count > min1) {
            return;
        }
        if(x % 3 ==0) {
            x_3(x, count);
        }
        if(x % 2 == 0) {
            x_2(x, count);
        }
        x_1(x, count);
        
    }
}

void x_2(int x, int count) {
    if(x == 1) {
        if(min1 > count) {
            min1 = count;
        }
    }
    if(x < 1) {
        return;
    }
    if(x % 2== 0) {
        count++;
        x = x / 2;
        if(count > min1) {
            return;
        }
        if(x % 3 ==0) {
            x_3(x, count);
        }
        if(x % 2 == 0) {
            x_2(x, count);
        }
        x_1(x, count);
        
    }
}
void x_1(int x, int count) {
    if(x == 1) {
        if(min1 > count) {
            min1 = count;
        }
    }
    if(x < 1) {
        return;
    }
    if(x!=1) {
        count++;
        x = x -1;
        if(count > min1) {
            return;
        }
        if(x % 3 ==0) {
            x_3(x, count);
        }
        if(x % 2 == 0) {
            x_2(x, count);
        }
        x_1(x, count);
        
    }
}