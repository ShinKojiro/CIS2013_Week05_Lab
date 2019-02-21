#include <iostream>
#include <string>

using namespace std;

int main(){

    const int MAX = 30;

    int LEN;
    cout << "How many students are in this class? ";
    cin >> LEN;
    
    

    // List of students in our class
    int student[MAX];
    // string name[LEN] = { "Bob", "Tom", "Jill" };
    string name[MAX];

    // int bob = 90;
    // int tom = 15;
    // int jill = 99;

    for(int i = 0; i < LEN; i++){
        cout << "Enter Student's name: ";
        cin >> name[i];
        cout << "Enter Student " << i + 1 << "'s grade: ";
        cin >> student[i];  
    }
    cout << endl;
    // cout << "Enter Bobs grade ";
    // cin >> student[0];
    // cout << "Enter Toms grade ";
    // cin >> student[1];
    // cout << "Enter jill's grade ";
    // cin >> student[2];

    // cout << "Bob grade is: " << student[0] << endl;
    // cout << "Tom grade is: " << student[1] << endl;
    // cout << "Jill grade is: " << student[2] << endl;

    // for(int i = 0; i < LEN; i++){
    //     cout << name[i] << " " << i + 1 << "'s grade is " << student[i] << endl;
    // }
    for(int i = 0; i < LEN; i++){
        cout << name[i] << "'s grade is " << student[i] << endl;
    }

}