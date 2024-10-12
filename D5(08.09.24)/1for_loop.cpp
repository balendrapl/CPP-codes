#include <iostream>
using namespace std;

int main(){
    
    // for (int num=1; num<=5; num++){
    //     cout<< " " << num; // cout<< num << " "; --> esa likhne pe 1st wale me pehle space & 2nd wale me baad me space aega
    // }
    // cout<< endl;
    // cout <<  "The last value of num is"<< num; // we get error here, Reason --> see in hand written notes 
    
    int num;
    for ( num=1; num<=100; num++){
        cout<< " " << num; 
    }
    cout<< endl;
    cout <<  "The last value of num is "<< num;
    


    //Infinite loop

    // int num;
    // for ( num=1; num>=0; num++){
    //     cout<< " " << num; 
    // }

    // cout<< endl;
    return 0;
}