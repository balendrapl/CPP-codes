#include <iostream>
using namespace std;

// method 1
void linearSearch(int *A, int size, int key){ //we can also take A[] or any other like arr[], baalu[] as all have a mean to take address of array as argument
    for(int i=0; i<size; i++){
        if(A[i]==key){
            cout<< i;
        }
    }
}

// method2 (better)
int linearSearch2(int *A, int size, int key){
    for(int i=0; i<size; i++){
        if(A[i]==key){
            return i;   // note- when a function return some value at some line then the code below that line doesn't run.
        }
    }
    return -1;
}


int main(){
    int arr[] = {4,5,8,9,2,20,39,12};
    int n= sizeof(arr)/sizeof(int);
    int k= 3;
    linearSearch(arr, n, k);
    cout << endl;
    cout << linearSearch2(arr, n, k);
    return 0;
}