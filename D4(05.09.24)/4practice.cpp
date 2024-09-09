#include <iostream>
using namespace std;
int main()
{
    int income;
    float Tax;
    cout << "Enter your income (in Lakhs) : ";
    cin >> income;

    if (income < 5)
    {
        Tax = 0;
    }
    else if ( income < 10 ){
        Tax = 0.02*income;
    }
    else if ( income >=10 && income < 12){
        Tax = 0.05*income;
    }
    else { Tax = 0.1*income;
    }
    cout << "Tax = "<< (Tax*100000);

    return 0;
}