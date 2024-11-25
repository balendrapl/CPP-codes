#include <iostream>
using namespace std;

class Student {
    string name;
    float cgpa;

    void getPercentage(){
        cout << cgpa*10 << "% \n";
    }
};

int main(){
    Student s1; // object declaration
    cout << sizeof(s1) <<endl;
 
    Student s2;
    return 0;
}