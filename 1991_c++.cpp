#include <iostream>

using namespace std;

int a[100][2];
bool check[27];

void preorder(int n) {
    if(n == -1) {
        return ;
    }

    cout<< char(n + 'A');
    preorder(a[n][0]);
    preorder(a[n][1]);
}
void inorder(int n) {
    if(n == -1) {
        return ;
    }

    inorder(a[n][0]);
    cout<< char(n + 'A');
    inorder(a[n][1]);
}
void postorder(int n) {
    if(n == -1) {
        return ;
    }

    postorder(a[n][0]);
    postorder(a[n][1]);
    cout<< char(n + 'A');
}
int main() {

    int N;

    cin >> N;

    for(int i = 0; i < N; i++) {
        char b, c, d;
        cin >> b >> c >> d;
        b = b -'A';

        if(c == '.') {
            a[b][0] = -1;
        }
        else {
            a[b][0] = c - 'A';
        }
        if(d == '.') {
            a[b][1] = -1;
        }
        else {
            a[b][1] = d - 'A';
        }
    }

    preorder(0);
    cout << '\n';
    inorder(0);
    cout << '\n';
    postorder(0);
    cout << '\n';
    return 0;
}