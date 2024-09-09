#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;
    if(marks>=90){
        cout<<"A"<<endl;
    } else if(marks>=80){
        cout<<"B"<<endl;
    } else if(marks>=70){
        cout<<"C";
    } 
    else{
        cout<<"D";
    }
    return 0;
}

//Difference between multiple if and if else conditions in notes
// #include <iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"Enter your marks : ";
//     cin>>marks;
//     if(marks>=90){
//         cout<<"A"<<endl;
//     } if(marks>=80){
//         cout<<"B"<<endl;
//     } if(marks>=70){
//         cout<<"C";
//     } 
//     else{
//         cout<<"D";
//     }
//     return 0;
// }