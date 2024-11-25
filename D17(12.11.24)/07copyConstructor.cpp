// by default copy constructor (created by compiler)
// #include <iostream>
// using namespace std;

// class Car {

// public:
//     string name;
//     string color;

//     Car(string name, string color){
//         this-> name = name;
//         this -> color = color;
//     }
// };

// int main()
// {
//     Car c1("Rolls Royce", "Black");

//     Car c2(c1);  // here a new copy constructor (which has all properties of c1 object)  is called by compiler
//     cout << c2.name << endl;
//     cout << c2.color << endl;

//     return 0;
// }

// custom copy constructor that we have created
#include <iostream>
using namespace std;

class Car {

public:
    string name;
    string color;

    Car(string name, string color){
        this-> name = name;
        this -> color = color;
    }

    Car(Car &original){
        cout << "copying original to new..\n";
        name = original.name;
        color = original.color;
    }
};

int main()
{
    Car c1("Rolls Royce", "Black");

    Car c2(c1);  // here our custom copy constructor is called
    cout << c2.name << endl;
    cout << c2.color << endl;

    return 0;
}