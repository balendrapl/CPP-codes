#include<iostream>
using namespace std;

class Print {
public:
    void show(int x){
        cout << "integer : " << x << endl;
    }
    void show(string str){
        cout << "string : " << str << endl;
    }
};

int main(){
    Print obj1;
    obj1.show(25);
    obj1.show("Baalu");
    return 0;
}