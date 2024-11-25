#include <iostream>
#include <string>
using namespace std;

class Car{
    string color;
    string name;

public:
    Car(){
        cout << "constructor without parameters \n";
    }

    Car(string color, string name) {
        cout << "constructor with parameters.\n";
        this->name = name;
        // *this.color = color;    it is throughing error
        this-> color = color;
    }

    void start() {
        cout << "car has started..\n";
    }
    void stop() {
        cout << "car has stoped.\n";
    }
    //getters
    string getName(){
        return name;
    }
};

int main() {
    Car c0 ;  // here non-parameteric constructor is called automatically
    Car c1("Black","Rolls Royce"); // here parameteric constructor is called automatically
    cout<< "car name : " << c1.getName() <<"\n"; 
    return 0;
}