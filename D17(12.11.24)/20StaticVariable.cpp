#include <iostream>
using namespace std;

//(1). static variable in functions

// void counter() {
//     // int count = 0;
//     /*output
//     count: 1
//     count: 1
//     count: 1
//     */
//     static int count = 0;
//     /*output
//     count: 1
//     count: 2
//     count: 3
//     */
//     count++;
//     cout << "count: " << count << endl;
// }

// int main() {
//     counter();
//     counter();
//     counter();
//     return 0;
// }


//(2). static variable in class

/*class Example {
public:
    int x=0;
};

int main(){
    Example eg1;
    Example eg2;
    Example eg3;

    cout << eg1.x++ << endl;
    cout << eg2.x++ << endl;
    cout << eg3.x++ << endl;

    return 0;
}
*/
/*output
0
0
0
*/

class Example {
public:
    //static const int x=0; // we can use this case only when member is constant i.e its value is not changing as C++ forbids in-class initialization of non-const static member.As we are printing x++ which is not constant. if it might be only eg1.x then this is valid
    static int x; // here we can on declare but can't initialize. For initialization we can do so only outside the class
};
int Example:: x=0; // initialization using scope (::) which is refering that int x of Example class

int main(){
    Example eg1;
    Example eg2;
    Example eg3;

    cout << eg1.x++ << endl;
    cout << eg2.x++ << endl;
    cout << eg3.x++ << endl;

    return 0;
}