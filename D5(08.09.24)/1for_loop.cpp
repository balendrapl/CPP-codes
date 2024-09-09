#include <iostream>
using namespace std;

int main(){
    
    // for (int num=1; num<=5; num++){
    //     cout<< " " << num; // cout<< num << " "; --> esa likhne pe koi difference ni aega
    // }
    // cout<< endl;
    // cout <<  "The last value of num is"<< num; // we get error here, Reason --> notes 
    
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