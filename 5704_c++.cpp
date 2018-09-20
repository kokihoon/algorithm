#include <iostream>

using namespace std;

int main() {
    bool check[26]= {false, }, answer = true;
    char alphabat[26] = {'a', 'b', 'c', 'd','e','f','g','h','i','j','k','l','n','m','o','p','q','r','s','t','u','v','w','x','y','z'};
    char ch[250] = {0, };
    cin.getline(ch, 250, '\n');
    while(ch[0] != '*'){
        for(int i = 0; i  <250; i++) {
            for(int j = 0; j < 26; j++) {
                if(alphabat[j] == ch[i]){
                    check[j] = true;
                }
            }
        }


        for(int i = 0; i < 26; i++) {
            if(check[i] != true) {
                answer = false;
                break;
            }
        }
        if(answer == true) {
            cout << "Y" << endl;
        }
        else {
            answer = true;
            cout << "N" << endl;
        }
        for(int i = 0; i  <250; i++) {
          ch[i] = 0;
        }
        cin.getline(ch, 250, '\n');
        for(int j = 0; j < 26; j++) {
            check[j] = false;
        }
    }
    return 0;
}