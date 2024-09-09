#include <iostream>
using namespace std;
int main(){
    
    cout<<((3<6) && (5>4))<< endl; //true -> 1
    cout<<((3>6) && (5>4))<< endl; //false -> 0
    cout<<((3==6) || (5>4))<< endl; //true -> 1
    cout<<(!(3==6) )<< endl; //true -> 1
    return 0;
}