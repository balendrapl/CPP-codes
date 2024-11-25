#include <iostream>
using namespace std;

class Student {
// private:         ye likhne ki jarorat ni h as when nothing is wrtten then its considered private by default
    string name;
public:
    float cgpa;

    void getPercentage(){
        cout << cgpa*10 << "% \n";
    }
};

int main(){
    Student s1;
    // s1.name = "Baalu";
    s1.cgpa = 9.65;
    cout << s1.cgpa << endl;
    s1.getPercentage();
    return 0;
}