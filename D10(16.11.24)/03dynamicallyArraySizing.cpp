//in this code we are dynamically sizing the array & dynamically allocating the memory to array at run time (as at compile time array is sized statically)
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter length of array : ";
    cin >> n;
    int arr[n];   
/* expression must have a constant valueC/C++(28)
dynamicInput.cpp(8, 11): the value of variable "n" (declared at line 5) cannot be used as a constant

---> this error is arising in line 8, but the irony is that the code is still running.

I think this is bcoz the dynamic input wala feature is only available in newer version of C++ */


    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << ",";
    }
    return 0;
}