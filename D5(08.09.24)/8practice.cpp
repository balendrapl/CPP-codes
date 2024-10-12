// //⭐⭐⭐⭐my method

#include <iostream>
using namespace std;

int main(){
    int n;
    do{
        cout << "Enter the number: ";
        cin >> n;
        if(n%10 == 0){
            cout << n << " is a multiple of 10"<<endl;
            break;
        }
        cout << n << " is not a multiple of 10"<<endl;
    }while(n%10 != 0 );
    return 0;
}


//⭐⭐⭐⭐⭐mam method
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     do{
//         cout << "Enter the number: ";
//         cin >> n;
//         if(n%10 == 0){
//             cout << n << "Its a multiple of 10"<<endl;
//             break;
//         }
//         cout << n << "Its not a multiple of 10"<<endl;
//     }while(true);
//     return 0;
// }

//⭐⭐⭐⭐⭐--IMP.NOTE--> if we want to create an infinite loop then loop ki condition ko always true statment bana do 
                        //e.g.  'true' ; 1>0 ; 5==5 etc.