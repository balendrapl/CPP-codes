//my method
// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;
//     for(int i=n; i>=1; i--){
//         for(int j=i; j>=1; j--){
//             cout <<"* ";
//         }cout << endl;
//     }
//     return 0;
// }

//mam's method -->real method
#include <iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout <<"* ";
        }cout << endl;
    }
    return 0;
}