#include <iostream>
using namespace std;

void print(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void selSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIdx=i;
        // loop for finding minimum index 
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIdx]){  // this is for ascending order, and for descending order: arr[j] > arr[minIdx
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    print(arr, n);
}

int main(){
    int arr[5]= {5,4,1,3,2};
    selSort(arr, 5);
    return 0;
}