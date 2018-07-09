#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int ko;
    int math;
    int en;
};
int main() {

    int num;
    cin >> num;
    vector<Student> student(num);

    for(int i = 0; i < num; i++) {
        cin >> student[i].name >> student[i].ko >> student[i].en >> student[i].math;

    }

    sort(student.begin(), student.end(), [] (Student u, Student v) {
        return (u.ko > v.ko) || (u.ko == v.ko && u.en < v.en) || (u.ko == v.ko && u.en == v.en && u.math > v.math)|| (u.ko == v.ko && u.en == v.en&& u.math == v.math &&u.name < v.name);
    } );

    for(int i = 0; i < num ; i++) {
        cout << student[i].name << '\n';
    }

    return 0;
}