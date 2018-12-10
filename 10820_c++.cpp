#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int count1[4];
void count_num(string str);


void count_num(string str) {

    for(int i = 0; i < str.size(); i++) {
        if(islower(str[i])){
            count1[0]++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            count1[1]++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            count1[2]++;
        }
        else if(str[i] == ' '){
            count1[3]++;
        }
    }
}

int main() {

    string str;

     while(getline(cin,str)) {

         for(int i = 0; i< 4; i++) {
             count1[i]= 0;
         }
         count_num(str);

         for(int i = 0; i < 4; i++) {
             cout << count1[i] << " ";
         }
         cout << endl;
    }
}