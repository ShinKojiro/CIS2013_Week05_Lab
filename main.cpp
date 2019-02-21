#include <iostream>

using namespace std;

int main(){

    int len = 3;

    // List of students in our class
    int student[len];

    // int bob = 90;
    // int tom = 15;
    // int jill = 99;

    for(int i = 0; i < len; i++){
    cout << "Enter Student " << i + 1 << "'s grade: ";
    cin >> student[i];  
    }

    // cout << "Enter Bobs grade ";
    // cin >> student[0];
    // cout << "Enter Toms grade ";
    // cin >> student[1];
    // cout << "Enter jill's grade ";
    // cin >> student[2];

    // cout << "Bob grade is: " << student[0] << endl;
    // cout << "Tom grade is: " << student[1] << endl;
    // cout << "Jill grade is: " << student[2] << endl;

    for(int i = 0; i < len; i++){
        cout << "Student " << i + 1 << "'s grade is " << student[i] << endl;
    }

}