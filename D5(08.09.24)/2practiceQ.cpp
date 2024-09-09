// Q1print apna college 5 times

// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=1; i<=5; i++){ //prefer to start as i=0 to i<5 bcoz it will help in Arrays
//         cout<< "Apna College"<<endl;
//     }
//     return 0;
// }

// Q2 print 1 to n natural no.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // print numbers in a single line i.e horizontally
    for (int i = 1; i <= n; i++)
    {
        cout << " " << i;
    }
    cout << endl;
    // print numbers in each different line i.e vertically
    for (int i = 1; i <= n; i++)
    {
        cout << " " << i << endl;
    }
    return 0;
}


//Q3print the sum of 1 to n number

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int sum=0; /* if just write 'int sum;' here then in our the garbage value of 'sum' variable will be  
//                  added to n natural no. & if we take 'sum=0' initially then only we get right result */
//     for (int i=1; i<=n; i++){
//         sum += i;
//     }
//     cout << "sum = " << sum <<endl;
//     return 0;
// }
// Note--> Above code can be easily written with the help of formula i.e sum = n(n+1)/2