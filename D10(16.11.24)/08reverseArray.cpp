/*
this code is not the reverse of array, its just the printing of array elements in reverse order
#include <iostream>
using namespace std;

void reverseArr(int *A, int n ){
    for(int i=n-1; i>=0; i--){
        cout << A[i] << ",";
    }
}
int main(){
    int arr[] = {4,7,45,3,9};
    int n= sizeof(arr)/sizeof(int);
    reverseArr(arr, n);
    return 0;
}
*/


#include <iostream>
using namespace std;

// method-1 (with using Extra space)

/*
void printArr(int *A, int n){
    for(int i=0; i<n; i++){
        cout << A[i]<< ",";
    }
}

int main(){
    int arr[] = {5,6,7,61,4};
    int n= sizeof(arr)/sizeof(int);

    int copyArr[n];
    for(int i=0; i<n; i++){
        copyArr[i] = arr[n-i-1];  // storing the elements values of arr to copyArr in reverse order
    }

    for(int i=0; i<n; i++){
        arr[i] = copyArr[i];  // updating the elements values of arr
    }
    
    printArr(arr, n);
    return 0;
}
*/

// method-2 (without using extra space {also called 2 pointer approach}) "MORE OPTIMISED"

void printArr(int *A, int n){
    for(int i=0; i<n; i++){
        cout << A[i]<< ",";
    }
}
int main(){
    int arr[] = {5,6,7,61,4};
    int n= sizeof(arr)/sizeof(int);
    int start =0;
    int end = n-1;
    while(start<end){
        //swapping of start & end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        /* instead of above 3 lines we can directly use the inbuilt swapping function of C++
         i.e. swap(a,b) and here its: swap(arr[start], arr[end]) */
        start++;
        end--;
    }
    printArr(arr, n);
    return 0;
}


