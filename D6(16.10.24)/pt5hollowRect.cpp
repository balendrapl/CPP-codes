// hollow rectangle pattern

//my method
// #include <iostream>
// using namespace std;

// int main(){
//     int r=4;//rows
//     int c=6; //columns
//     for(int i=1; i<=r; i++){ 
//         for(int j=1; j<=c; j++){ 
//             if(i>1 && i<r && j>1 && j<c ){
//                 cout<<"  ";
//                 continue;
//             }
//             cout<<"* ";
//         } cout<<endl;
//     } 
//     return 0;
// }

// output in case of break statement --> * * * * * *
//                                       *              
//   don't know why *is not printing     *
//   at required position                * * * * * *

// output in case of continue statement --> * * * * * *
//                                          *         *
//                                          *         *
//                                          * * * * * *

//mam's method  //edited
#include <iostream>
using namespace std;

int main(){
    int r=4;//rows   NOTE-> to change the dimension of box then change the stopping conditions of any or both of the loops
    for(int i=1; i<=r; i++){ 
        cout<<"* ";                  //for 1st column
        for(int j=1; j<=r; j++){     // this loop is used to create the stars & spaces b/w 1st & last column
            if(i==1 || i==r){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<"*"<<endl;             // for last column
    } 
    return 0;
}