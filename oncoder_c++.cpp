#include <iostream>

using namespace std;


int main() {
    string ch;

    cin >> ch;


    for(int i = 0; i< ch.size(); i++) {

        if((i+1) % 3 == 0 && i != 0) {
            if(ch[i] >= 'a' && ch[i] <= 'z') {
                ch[i] = char(ch[i]- 32);
                //cout << ch[i];
            }
            else {
                ch[i] = '!';
            }
        }
        else {
            //cout << ch[i];
        }
    }
    cout <<'\n';
    cout << ch;
    return 0;
}