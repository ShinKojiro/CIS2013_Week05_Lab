#include <iostream>
#include <string>

using namespace std;

const int MAX = 30;
int student[MAX];
string name[MAX];

void makeStudent(int x){
    cout << "Enter Student's name: ";
    cin >> name[x];
    cout << "Enter Student " << x + 1 << "'s grade: ";
    cin >> student[x]; 
}

void printGrade(int y){
    cout << name[y] << "'s grade is " << student[y] << endl;
}

int main(){

    

    int LEN;
    cout << "How many students are in this class? ";
    cin >> LEN;

    for(int i = 0; i < LEN; i++){
        makeStudent(i);
    }
    cout << endl;
    
    for(int i = 0; i < LEN; i++){
        printGrade(i);
    }

}