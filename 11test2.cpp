#include <iostream>
#include <string>

using namespace std;

int main() {

    char split[3] = {'.', '?', '!'};
    string * split1 = StringSplit("Forget CVs.. Save time . x x", split);
    cout << split1[0] << endl;
    return 0;
}