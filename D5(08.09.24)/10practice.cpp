//⭐⭐⭐⭐⭐this an infinite loop which will never stop at any condition 
//and for this we will have to kill the terminal.

#include <iostream>
using namespace std;

int main(){
    int n;
    do{
        cout << "Enter the number: ";
        cin >> n;
        if(n%10==0){
            continue;
        }
        cout << "Entered number is " << n <<endl;
    } while(true);
    return 0;
}

