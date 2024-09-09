// #include <iostream>
// using namespace std;
// int main(){
//     int age; 
//     cout<<"Enter your age : ";
//     cin>>age;

//     if(age>=18){
//         cout<<"You can Vote";
//     } 
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int age; 
    cout<<"Enter your age : ";
    cin>>age;

    if(age>=18){
       cout<<"You can Vote"<<endl;
    } 
    if(age<=75 && age>=25){
        cout<<"You can contest in elections ";
    }
    else{
        cout<<"You cannot contest.";
    
    }
    return 0;
}