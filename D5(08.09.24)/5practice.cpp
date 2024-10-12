// Q1⭐⭐⭐⭐⭐
//  #include <iostream>
//  using namespace std;

// int main(){
//     int n=10829;
//     int digSum =0;
//     while(n>0){
//         int lastDig = n%10;
//         //cout << lastDig<< " ";  //to print digits in reverse order
//         digSum += lastDig;
//         // cout<<digSum<<endl;
//         n = n/10;
//         // cout<<endl;
//     }
//     cout<< "Sum of digits = "<<digSum<<endl;
//     return 0;
// }

// Q2
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 324679;
//     int oddDigSum = 0;
//     while (n > 0)
//     {
//         int lastDig = n % 10;
//         if (lastDig % 2 != 0)
//         {
//             oddDigSum += lastDig;
//         }
//         n = n / 10;
//     }
//     cout << "Sum of odd digits of number n: " << oddDigSum << endl;
//     return 0;
// }

// Q3
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10829;
//     while (n > 0)
//     {
//         int lastDig = n % 10;
//         cout << lastDig;
//         n = n / 10;
//     }
//     // dont know why mam wrote --> cout<<endl;  even though bina iske code running
//     return 0;
// }

// // Q4 my method
// #include <iostream>
// using namespace std;

// int main(){
//     int n=10829;
//     cout << "Result= ";
//     while(n>0){
        
//         int lastDig = n%10;
//         cout<<lastDig;
//         n= n/10;
//     }
//     return 0;
// }


// Q4 correct method
#include <iostream>
using namespace std;

int main(){
    int n=10829;
    int res = 0;
    while(n>0){
        
        int lastDig = n%10;
        res = res*10 + lastDig;
        n= n/10;
    }
    cout <<"Result= "<<res;
    return 0;
}