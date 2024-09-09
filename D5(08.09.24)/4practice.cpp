/*Q1*/

// //my method
// #include <iostream>
// using namespace std;
// int main (){
//     char star = '*';
//     for ( int j=1; j<=4; j++){
//         for ( int i=1; i<=4; i++){
//             cout<< " "<< star;
//         }
//         cout<< endl;
//     }
//     return 0;
// }


//Mam's method
// #include <iostream>
// using namespace std;
// int main (){
//     for ( int i=1; i<=4; i++){
//         cout<< "* * * *"<<endl;;
//         }
//     return 0;
// }


/*Q2*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter n : ";
    cin>>n;
    for ( int i=n; i>=1;i--){
        cout<<" "<<i;
    }
    cout<<endl;
    return 0;
}


