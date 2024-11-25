#include <iostream> 
using namespace std;

int main () {
    //int marks[50]; // array declaration
    int marks[50] = {5,8,4}; // array declaration & initialisation
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[49] << endl;
    cout << marks[50] << endl;

    int percentage[5] = {96, 89, 88, 90,76};
    cout << sizeof(percentage) << endl; // output: 20 || bcoz this is in bytes, as we have stored 5 int values where each int occupy 4 bytes. So overall size => 5*4 = 20
    // for finding lenth of array
    int l = sizeof(percentage) / sizeof(int);
    cout << "length of array = " << l;
    return 0;
}