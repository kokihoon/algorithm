#include <iostream>

using namespace std;
bool check = false;

int recur(long long a, long long b, long long S) {
    if(check == true) {
        return 0;
    }
    for(long long i = 1;i <= 10; i++) {
        if(((S-a-b)-(a*i))%(b*i) == 0) {
            check = true;
            printf("YES\n");
            // cout << "YES" << '\n';
            return 0;
        }
        else if(((S-a-b)-(b*i))%(a*i) == 0) {
            check = true;
            printf("YES\n");
            // cout << "YES" << '\n';
            return 0;
        }
        else if(((S-a-b)-(a*i) < 0) or ((S-a-b)-(b*i) < 0)) {
            return 0;
        }
    }
    a+=b;
    recur(a,b,S);
    a-=b;
    b+=a;
    recur(a,b,S);
    // b-=a;
    // a+=b;
    // b+=a;
    // recur(a,b,S);
    // a-=b;
    // b-=a;
    // b+=a;
    // a+=b;
    // recur(a,b,S);

    return 0;
}

int main() {
    long long a, b, S;

    // cin >> a >> b >> S;
    scanf("%lld %lld %lld", &a, &b, &S);
    if(a+b>S and a != S and b != S){
        // cout <<"NO"<<'\n';
        printf("NO\n");

        return 0;
    }
    if(a == S or b == S or a+b ==S) {
        printf("YES\n");

        // cout << "YES"<<'\n';
        return 0;
    }
    recur(a, b, S);
    if(check == true) {
        return 0;
    }
    printf("NO\n");

    // cout <<"NO"<<'\n';
    return 0;
}