#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){   // this is for ascending order, and for descending order: arr[j] < arr[j+1]
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr, n);
}


int main(){
    int arr[] = {5,2,9,6,1};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
    return 0;
}

// optimised bubble sort
//will be done later