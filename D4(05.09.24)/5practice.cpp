// #include <iostream>
// using namespace std;

// int main(){
//     int a,b,c;
//     cout<<"Enter 1st number : ";
//     cin>>a;
//     cout<<"Enter 2nd number : ";
//     cin>>b;
//     cout<<"Enter 3rd number : ";
//     cin>>c;
//     if (a>b){
//         if (a>c){
//             cout<< "The greatest number = "<<a<<endl;
//         } else{ 
//             cout<< "The greatest number = "<<c<<endl;
//         }
//     } else {
//         if (b>c) {
//             cout<< "The greatest number = "<<b<<endl;
//         } else {
//             cout<< "The greatest number = "<<c<<endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;

    if (a>=b && a>=c) {
        cout << "The greatest number = "<<a<<endl;
    } else if (b>=c){
        cout << "The greatest number = "<<b<<endl;
    } else { 
        cout << "The greatest number = "<<c<<endl;
        }
    return 0;
}