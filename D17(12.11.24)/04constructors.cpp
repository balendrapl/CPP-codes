#include <iostream>
#include <string>
using namespace std;

class Car{
    string color;
    string name;

public:
    Car(string colorValue, string nameValue) {
        cout << "Checking the calling of constructor at the creation of object.\n";
        name = nameValue;
        color = colorValue;
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
    Car c1("Black","Rolls Royce");
    cout<< "car name : " << c1.getName() <<"\n"; 
    return 0;
}