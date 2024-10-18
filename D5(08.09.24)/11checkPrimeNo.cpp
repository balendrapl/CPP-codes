//my method -->🧐😤 iss method me ye pta ni chaal rha ki 3 & 5 ke odd multiples ko ye code Prime kyo bol rha h
//even though similar method se python course ke Ch.7(problem.4) me bhi kiya tha but wo easily run hogaya tha  

/* NOW SOLUTION OF ABOVE PROBLEM IS BELOW */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout << n<<" is a not prime number"<< endl;
            break;
        }
    } 
    cout << endl;
    for(int i=2; i<n; i++)
    {
        if(n%i!=0)
        {
            cout << n<<" is a prime number"<< endl;
            continue;
        }
    } 
    return 0;
}

/* Very imp. concept ⭐⭐⭐⭐⭐

Q. Python me similar code kese run hua & C++ me kyo ni?
Ans. In python, we have an option of "for-else" statement where if loop ki condition fulfil ni hoti then else statement runs.

        while(True):
            num = int(input("Enter the number: "))
            for i in range(2,num):
                if(num%i == 0):
                    print (f"{num} is not prime number.") # next line me break isliye use karna pda as without that we were getting multiple line printing e.g 8 is not a prime no.
                    break                                 #bcoz vo next number se divide karke check karta h whereas we know, if ek baar remainder 0 aa gya then no need to divide as it bcomes a non prime no.
            else:
                print (f"{num} a prime number.")

    Whereas in C++, we don't have such statement. So, here hum ye to find kar sakte h ki "no. is not prime" with the help of following code--

        for(int i=2; i<n; i++)
        {
            if(n%i==0)
            {
                cout << n<<" is a not prime number"<< endl;
                break;
            }
        } 

⭐IMP.NOTE--> If we want a loop to completely then the next loop to be run then 
            just after the loop, insert a line --> "cout << endl;".       
    
    case-1  But we can't determine "no. is prime" with the help of following code bcoz if we check for no. 25 then the code will prematurely output that 25 is prime when it checks 25 % 2 != 0 (which is true),
            even though 25 is divisible by 5.

            cout << endl;//⭐
            for(int i=2; i<n; i++)
            {
                if(n%i!=0)
                {
                    cout << n<<" is a prime number"<< endl;
                    break;
                }
            }

    case-1  and if use continue then for non favaourable cases it will print "no. is prime" again & again.

            cout << endl;//⭐
            for(int i=2; i<n; i++)
            {
                if(n%i!=0)
                {
                    cout << n<<" is a prime number"<< endl;
                    continue;
                }
            }
        
    case-3  The following code has a logical error. The program incorrectly prints "prime" or "not prime" after checking just the first divisor, i = 2. For example, if the number is 25,
            the code will prematurely output that 25 is prime when it checks 25 % 2 != 0 (which is true), even though 25 is divisible by 5.
            To correctly check if a number is prime, you need to check all divisors from 2 to n-1
    
            for(int i=2; i<n; i++)
            {
                if(n%i==0)
                {
                    cout << n<<" is a not prime number"<< endl;
                    break;
                } else
                {
                    cout << n<<" is a prime number"<< endl; 
                    break;
                }
            } 

*/







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

// #include <iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     bool isPrime = true;

//     for(int i=2; i<=sqrt(n); i++){
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