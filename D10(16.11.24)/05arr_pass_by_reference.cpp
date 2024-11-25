#include<iostream>
using namespace std;


void func(int arr[]){
    arr[0] = 100;
}
// this below function also give the same result as the above gives
void func2(int *ptr){
    ptr[0] = 100;
}
 
int main(){
    int arr[] = {15,39,7,4,8};
    int n= sizeof(arr) / sizeof(int);
    cout << arr << endl;   // in javascript -- this will print the whole array whereas here we get the address of array
    cout << *arr << endl;   // this is 2nd way, we can use to access the value of 1st array index (1st way => arr[0])
    cout << *(arr + 1) << endl;  // next index value or arr[1]
    cout << *(arr + 2) << endl; // next index value  or arr[2]
    
    func(arr);  // passing array name is equivalent of passing a pointer
    cout << arr[0] << endl;
    func2(arr);  // passing array name is equivalent of passing a pointer
    cout << arr[0];
    return 0;
}

