#include <iostream>
using namespace std;

int main(){
    int n=4;
   //upper pyramid
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<< "*";
        }
        cout << endl;       // if u don't use this line then loop pehle i=1 ke liye run karegi then instead of running for i=2, neeche ka code run hota h & after that i=2 ke liye run hoga
    }    
 //lower pyramid

    //method1 -->diamond with sharp edges
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << " ";
    //     }
    //     for(int j=1; j<=2*(n-i)-1; j++){
    //         cout<< "*";
    //     } 
    //     cout<< endl;
    // }    
    //method2 (easier) -->if u are not able to find formula
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){  // for perfect diamond with sharp edge --> use j<=n-i+1
            cout << " ";
        }
        for(int j=1; j<=2*i-1; j++){   //for perfect diamond with sharp edge --> use j<=2*i-3
            cout<< "*";
        }     
    
        cout << endl;
    }
    return 0;
}