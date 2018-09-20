#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;

    double test[N+1], max = -1;
    int stage_size = stages.size();
    int count = 0, check_num;

    for(int i = 1; i <= N+1; i++) {
        for(int j = 0; j < stages.size(); j++) {
            if(i == stages.at(j)) {
                // cout << stages.at(j)  << " " << stages.size() << endl; 
                // stages.erase(stages.begin()+j);
                count++;
            }
        }
        //cout << "count : " << count << " size : " << stages.size() << endl;
        test[i] = (double)count / stages.size();
        count = 0;

        for(int j = 0; j < stages.size(); j++) {
            if(i == stages.at(j)) {
                // cout << "test " << i << " j " << j << " stages.at(j) " << stages.at(j) << endl;
                stages.erase(stages.begin()+ j);
                j--;
            }
        }
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(max < test[j] && max != test[j]) {
                max = test[j];
                check_num = j;
            }
        }
        max = -1;
        test[check_num] = -1;
        answer.push_back(check_num);
    }

    return answer;
}

int main() {
    vector<int> stages;
    int N = 5;
    // 	[2, 1, 2, 6, 2, 4, 3, 3]
    stages.push_back(2);
    stages.push_back(1);
    stages.push_back(2);
    stages.push_back(6);
    stages.push_back(2);
    stages.push_back(4);
    stages.push_back(3);
    stages.push_back(3);

    // for(int i = 0; i <= N; i++) {
    //     cout << stages[i] << endl;
    // }

    solution(N, stages);




    return 0;
}

