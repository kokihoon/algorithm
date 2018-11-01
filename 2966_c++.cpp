#include <iostream>

using namespace std;

int main() {

    int N;
    char Answer[101];
    char A[100] = {'A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A', 'B','C','A'};
    char B[100] = {'B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C','B', 'A', 'B', 'C',};
    char G[100] = {'C', 'C', 'A', 'A','B', 'B', 'C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A','B', 'B','C', 'C', 'A', 'A'};
    int A_Answer = 0, B_Answer = 0, G_Answer = 0;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> Answer[i];
        if(A[i] == Answer[i]) {
            A_Answer++;
        }
        if(B[i] == Answer[i]) {
            B_Answer++;
        }
        if(G[i] == Answer[i]) {
            G_Answer++;
        }

    }

    if(A_Answer > B_Answer) {
        if(A_Answer > G_Answer) {

            cout <<A_Answer << endl; 
            cout <<"Adrian" << endl;
        }
        else if(A_Answer == G_Answer) {
            cout <<A_Answer << endl; 

            cout <<"Adrian" << endl;
            cout <<"Goran" << endl;        
        }
        else {
            cout <<G_Answer << endl; 

            cout <<"Goran" << endl;
        }
    }
    else if(A_Answer < B_Answer){
        if(B_Answer > G_Answer) {
            cout <<B_Answer << endl; 

            cout <<"Bruno" << endl;
        }
        else if(B_Answer == G_Answer) {
            cout <<B_Answer << endl; 

            cout <<"Bruno" << endl;
            cout <<"Goran" << endl;        
        }
        else {
            cout <<G_Answer << endl; 

            cout <<"Goran" << endl;
        }
    }
    else if(A_Answer == B_Answer) {
        if(A_Answer==G_Answer) {
            cout <<A_Answer << endl; 

            cout <<"Adrian" << endl;
            cout <<"Bruno" << endl;
            cout <<"Goran" << endl;
        }
        else if(A_Answer < G_Answer){
            cout <<G_Answer << endl; 

            cout << "Goran" << endl;
        }
        else if(A_Answer > G_Answer) {
            cout <<A_Answer << endl; 

            cout <<"Adrian" << endl; 
            cout <<"Bruno" << endl;

        }
    }
 
    return 0;
}