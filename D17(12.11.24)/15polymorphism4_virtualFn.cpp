#include <iostream>
using namespace std;

class Parent {
public:
    virtual void hello(){
        cout << "parent hello\n";
    }
};

class Child : public Parent {
public:
    void hello(){
        cout << "child hello\n";
    }
};

int main(){
    Child c1;
    Parent *ptr;  // this is a parent class pointer which points to the object of parent class
    ptr = &c1;    // here we made the parent clas pointer to point to the child class object. In other words, we are binding parent clas pointer with child class object & this is runtime binding
    ptr->hello(); 
    return 0;
}