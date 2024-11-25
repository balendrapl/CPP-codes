#include <iostream>
using namespace std;

// int main() {
//     int arr[25] = {3,7,2,6,9};
//     int len = sizeof(arr) / sizeof(int);
//     for(int idx=0; idx<len; idx++){  // or use this idx<=len-1
//         cout << arr[idx] << " ";
//     }
//     return 0;
// }

int main() {
    int arr[5];
    int n =sizeof(arr) / sizeof(int);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << ",";
    }
    return 0;
}

// terminal me- Enter 1st no. -> press Enter -> Enter 2nd no. -> press Enter & so on...
// other way:-  Enter 1st no. -> Spacebar -> Enter 2nd no. -> Spacebar ...... at last press Enter