//my method -->🧐😤 iss method me ye pta ni chaal rha ki 3 & 5 ke odd multiples ko ye code Prime kyo bol rha h
//even though similar method se python course ke Ch.7(problem.4) me bhi kiya tha but wo easily run hogaya tha  
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int i=2;
//     cout << "Enter the number: ";
//     cin >> n;
//     for(int i=2; i<n; i++)
//     {
//         if(n%i==0)
//         {
//             cout << n<<" is a not prime number"<< endl;
//             break;
//         } else
//         {
//             cout << n<<" is a prime number"<< endl; 
//             break;
//         }
//     } 
//     // if(n%i!=0){
//     //     cout << n<<" is a prime number"<< endl;   
//     // }
        
//     return 0;
// }


//mam's method⭐⭐

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     bool isPrime = true;

//     for(int i=2; i<n; i++){
//         if(n%i ==0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime) {
//         cout<<"no. is prime"<<endl;
//     } else{
//         cout<<"no. is NOT prime"<<endl;
//     }
//     return 0;
// }


//mam's method⭐⭐⭐⭐(optimized)

#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool isPrime = true;

    for(int i=2; i<=sqrt(n); i++){
        if(n%i ==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime) {
        cout<<"no. is prime"<<endl;
    } else{
        cout<<"no. is NOT prime"<<endl;
    }
    return 0;
}