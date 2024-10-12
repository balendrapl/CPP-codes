#include <iostream>
using namespace std;

int main(){
    int val=1;
    //do while loop
    do{
        cout<<val<<" --> value in do while loop";
        // val++;  no need of this right now 
    } while(val>5);
    //while loop  
    while(val>5){
        cout<<val<<" --> value in while loop";
        // val++;  no need of this right now as we r looking for the diff b/w loops
    }
    cout <<endl;
    return 0;
}