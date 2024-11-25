#include <iostream>
#include <string>
using namespace std;

class Animal{
public:

    void eat(){
        cout << "eats\n";
    }
    void breathe(){
        cout << "breathes\n";
    }
};

class Mammal : public Animal {
public:
    string bloodType;

    Mammal(){
        bloodType = "warm";
    }
};

class Bird : public Animal{
public:
    void fly(){
        cout << "A bird can fly.\n";
    }
};
class Fish : public Animal{
public:
    void swim(){
        cout << "A fish can swim.\n";
    }
};

int main() {
    Bird b1;
    b1.fly();
    b1.eat();
    b1.breathe();

    Fish f1;
    f1.swim();
    f1.eat();
    f1.breathe();

    Mammal m1;
    cout << m1.bloodType << endl;
    m1.eat();
    m1.breathe();
    return 0;
}