#include <iostream>
#include <string>
using namespace std;

class Teacher{
public:
    int salary;
    string subject;
};

class Student {
public:
    int rollNo;
    float cgpa;
};

class TA : public Teacher , public Student {
public:
    string name;

};

int main(){
    TA ta1;
    ta1.name = "Baalu";
    ta1.cgpa = 9.1;
    ta1.salary = 50000;
    ta1.subject = "C++";
    cout << ta1.name << endl;
    cout << ta1.cgpa << endl;
    cout << ta1.salary << endl;
    cout << ta1.subject << endl;
    return 0;
}