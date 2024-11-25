#include <iostream>
using namespace std;

int binSearch(int *A, int n, int key){
    int start = 0, end= n-1;
    while(start<=end){
        int mid = (start + end)/2;
        if(A[mid]==key){
            return mid;
        }
        else if(A[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n= sizeof(arr)/sizeof(int);
    // int key = 12;
    
    cout << binSearch(arr, n, 12);
    return 0;
}