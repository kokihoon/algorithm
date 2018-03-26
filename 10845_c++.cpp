#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int>  qu;
    int num;

    cin >> num;

    while(num--) {
        string s;
        cin >>s;

        if(s == "push") {
            int ch;
            cin >> ch;
            qu.push(ch);
        }

        else if(s == "front") {
            if(qu.size() ==0) {
                cout << -1 << '\n';
            }
            else            
                cout << qu.front()<<'\n';
        }
        else if(s == "back") {
            if(qu.size() ==0) {
               cout << -1 << '\n';
            }
            else
                cout << qu.back()<<'\n';
        }
        else if(s == "size") {
            cout << qu.size()<<'\n';
        }
        else if(s == "empty") {
            
            cout << qu.empty()<<'\n';
        }
        else if(s=="pop"){
            if(qu.empty()== 1){
                cout << -1<<'\n';
            }
            else {
                cout << qu.front()<<'\n';
                qu.pop();
            }
        }
    }


    return 0;
}