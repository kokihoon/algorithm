#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;
    int n;
    int i = 0;
    do {
        
        cin >> n;
        v.push_back(n);

        if(v.size() > 1) {
            if(v[i] < v[i-1]) {
                cout << "Bad" << endl;
                return 0;
            }
        }
        i++;
    } while (getc(stdin) == ' ');
    cout << "Good" << endl;


    return 0;
}