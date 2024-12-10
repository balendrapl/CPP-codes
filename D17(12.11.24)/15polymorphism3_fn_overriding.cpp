#include <iostream>
using namespace std;

class Parent {
public:
    void show (){
        cout << "parent class show...\n";
    }
};

class Child : public Parent {
public:
    void show (){
        cout << "child class show...\n";
    }
};

int main(){
    Child c1;
    c1.show(); // at compile time, the compiler don't know which show function to be called. As this is decided at the runtime
    return 0;
}