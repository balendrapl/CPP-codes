#include <iostream>
using namespace std;
int main(){
    int a=4;
    a += 5; //a= a+5 => 9
    cout<<a<< endl;
    a -= 3; //a= a-3 => 6  here use the new value of a i.e 9 & similarly for others
    cout<<a<< endl;
    a *= 3; //a= a/3 => 18
    cout<<a<< endl;
    
    a /= 5; //a= a*5 => 3
    cout<<a<< endl;
    
    return 0;
}