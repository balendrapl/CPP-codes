//type 1 --> for both square & rectangle box
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=4; j++){
//             cout<< i <<" ";    // -->  1 1 1 1
                                    // 2 2 2 2
                                    // 3 3 3 3
                                    // 4 4 4 4
                                    // 5 5 5 5

            //cout << j <<" ";  --> // 1 2 3 4 
                                    // 1 2 3 4
                                    // 1 2 3 4
                                    // 1 2 3 4
                                    // 1 2 3 4
//         } cout<<endl;
//     } 
//     return 0;
// }

//type 2 --> for a square box
#include<iostream>
using namespace std;

int main(){
    int n=6;
    //outer loop
    for(int i=1; i<=n; i++){        //Note--> if we want to change dimensions of box then instead of n we can write n+1 or something else a/c to the requirement
        //inner loop
        for(int j=1; j<=n; j++){    //Note--> Same as above
            cout<< i <<" ";
        } cout<<endl;
    } 
    return 0;
}