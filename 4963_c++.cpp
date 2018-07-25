#include <iostream>

using namespace std;

int a[51][51];

int dfs(int i, int j) {
    if(a[i][j] == 0) {
        return 0;
    }

    a[i][j] = 0;
    if(a[i-1][j] == 1 and i > 0) {
        dfs(i-1, j);
    }
    if(a[i-1][j+1] == 1 and i > 0) {
        dfs(i-1,j+1);
    }
    if(a[i][j+1] == 1) {
        dfs(i,j+1);
    }
    if(a[i+1][j+1] == 1) {
        dfs(i+1,j+1);
    }
    if(a[i+1][j] == 1) {
        dfs(i+1,j);
    }
    if(a[i+1][j-1] == 1 and j > 0) {
        dfs(i+1,j-1);
    }
    if(a[i][j-1] == 1 and j > 0) {
        dfs(i,j-1);
    }
    if(a[i-1][j-1] == 1 and i > 0 and j > 0) {
        dfs(i-1,j-1);
    }

    return 1;
}

int main() {
    int w, h;

    while(1) {
        cin >> w >> h;
        int count = 0;
        if(w == 0 and h == 0) {
            return 0;
        }

        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                int b;
                cin >> b;
                a[i][j] = b;
            }
        }


        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                count +=dfs(i,j);
            }
        }

        cout << count<< '\n';
        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                a[i][j] = 0;
            }
        }
    }


    return 0;
}