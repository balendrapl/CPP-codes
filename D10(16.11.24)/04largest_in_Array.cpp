#include <iostream>
using namespace std;

int main(){
    int arr[5]= {5, 40, 33, 89, 2};
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<5; i++){
        if(max<arr[i]){
            max = arr[i];
            cout << "Assigning value " << arr[i] << " to max\n";
        }
    }
    cout << max << endl;

    for(int i=0; i<5; i++){
        if(min>arr[i]){
            min = arr[i];
            cout << "Assigning value " << arr[i] << " to min\n";
        }
    }
    cout << min;
    return 0;
}