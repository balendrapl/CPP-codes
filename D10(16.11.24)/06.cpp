// #include <iostream>
// using namespace std;

// void printArr(int nums[]){
//     cout << "size of nums: " << sizeof(nums) << endl;
// /* (2). actually nums is also acting as a pointer & pointing to the same address as of arr
//   so if we find sizeof(nums) then it will actually give size of an integer pointer (which is 8 but in my pc its 4) instead of giving the size of array 
//   therefore the following line is the only one which is generating error*/
//     int n= sizeof(nums)/sizeof(int);
//     for (int i=0; i<n; i++){
//         cout << "all values of array: " << nums[i]<< " ";
//     }
// }

// int main(){
//     int arr[] = {5,6,7,8,9};
//     cout << "size of arr: " << sizeof(arr) << endl;
//     int n= sizeof(arr)/sizeof(int);
//     printArr(arr);
//     return 0;
// }
// /* (1). what do we expect from this code
// to print the elements of array
// but it will give error as -
// warning: 'sizeof' on array function parameter 'arr' will return size of 'int*' [-Wsizeof-array-argument]
// due to line 9.
// */


/*(3). So when we pass an array in a function, then array ke sath uska size bhi pass karna hota h, bcoz that function is unable to calculate the size of array (bcoz func have the only starting position pointer
it doesn't know about the ending position pointer) & therefore we can say, we have to pass the length value of array along with the starting pointer */

#include <iostream>
using namespace std;

void printArr(int nums[], int size){
    for(int i=0; i<size; i++){
        cout << nums[i] << " ";
    }
}

int main(){
    int arr[] = {5,6,7,8,9};
    int n= sizeof(arr)/sizeof(int);
    printArr(arr, n);
    return 0;
}