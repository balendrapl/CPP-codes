#include <iostream>
using namespace std;

// abstract class
class Shape {
public:
    virtual void draw() = 0; // pure virtual function or abstract fn
};

class Circle : public Shape{
public:
    void draw(){
        cout << "draw a circle\n";
    }
};
class Square : public Shape{
public:
    void draw(){
        cout << "draw a square\n";
    }
};

int main(){
    Square s1;
    s1.draw();

    Circle c1;
    c1.draw();

    // Shape sh1;   throughs error
    // sh1.draw();
    return 0;
}