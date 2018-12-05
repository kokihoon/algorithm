#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    string str;
    bool check = true;
    int max = 0, index = 0;
    char alph[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K','L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X','Y','Z'};
    int count[26] ={0,};
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] >='A' && str[i] <= 'Z') {
            count[str[i] - 'A'] += 1;
        }
        else {
            count[str[i] - 'a'] += 1;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(max < count[i]) {
            max = count[i];
            index = i;
        }
    }
    for(int i = 0; i < 26; i++) {
        if(max == count[i] && check == true) {
            check = false;
        }
        else if(max == count[i] && check == false) {
            cout << "?" << endl;
            return 0;
        }
    }
    cout << alph[index] << endl;
    
    return 0;
}