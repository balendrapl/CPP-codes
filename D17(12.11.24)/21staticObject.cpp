#include <iostream>
using namespace std;

class Example {
public:
    Example(){
        cout << "constructor....\n";
    }
    ~Example(){
        cout << "destructor....\n";
    }
};

int main(){
    int a=0;
    if (a==0){
        //Example eg1;
/*output
constructor....
destructor....
code ending
*/
        static Example eg1;
        /*output
        constructor....   --> this will execute in beginning when it is called
        code ending       
        destructor....    --> it should be printed before the above line but as object is static so will be destroyed at the of program 
        */
    }
    cout << "code ending\n";
    return 0;
}