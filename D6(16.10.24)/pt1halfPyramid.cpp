//my method⭐⭐⭐⭐⭐ little bit complex

// #include <iostream>
// using namespace std;

// int main(){
//     int n=4;
//     char star = '*';
//     for(int i=0; i<n; i++){
//         for(int j=1; j<=n; j++){
//             // int n= star;
//             cout << star <<" ";
//             if(j>i){
//                 break;
//             }
//         }cout << endl;
//     }
//     return 0;
// }

//mam's method ---> easier & faster method
#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout <<"* ";
        }cout << endl;
    }
    return 0;
}