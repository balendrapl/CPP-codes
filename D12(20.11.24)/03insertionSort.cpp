#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void inserSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp=arr[i];
        int prev = i - 1;
        while(prev>=0 && arr[prev]>arr[i]){
            swap(arr[prev], arr[prev+1]);
            prev--;
            arr[prev+1]=temp; // if dont write this condition then jo sahi position usse just ek position pehle hi vo element insert ho jaega
        }
    }
    print(arr, n);
}

int main(){
    int arr[5] = {5,4,1,3,2};
    inserSort(arr, 5);

    return 0;
}