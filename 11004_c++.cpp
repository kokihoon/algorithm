#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int a[5000001];
int main() {

    int num, whitch;
    scanf("%d %d", &num, &whitch);
    // cin >> num >> whitch;
    
    for(int i = 0; i < num; i++) {
        // cin >> a[i];
        scanf("%d", &a[i]);
    }
    nth_element(a, a+whitch-1, a+num);

    printf("%d\n", a[whitch-1]);
    // cout <<a[whitch-1] << '\n';
    return 0;
}