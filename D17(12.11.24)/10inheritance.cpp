#include <iostream>
#include <string>
using namespace std;

class Animal{
public:
    string color;

    void eat(){
        cout << "eats\n";
    }
    void breathe(){
        cout << "breathes\n";
    }
};
// confusion - below line me private mode karne par koi farak kyu ni aaya as eat() function should not be accessed inside the derived class, it should through error
class Fish : protected Animal{ //inheritance of base class Animal 
public:
    int fins;

    void swim(){
        eat(); //eat() is accessible inside this derived class in protected mode
        cout << "swims\n";
    }
};

int main() {
    Fish f1;
    f1.fins =3;
    cout << f1.fins << endl;
    f1.swim();
    // f1.eat();    // in protected & private mode, it will through error
    // f1.breathe(); //in protected & private mode, it will through error
    return 0;
}