#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char op; // operator

    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;
    cout << "Enter op :";
    cin >> op;

    if (op == '+')
    {
        cout << a << " + " << b << "= " << (a + b);
    }
    else if (op == '-')
    {
        cout << a << " - " << b << "= " << a - b;
    }
    else if (op == '*')
    {
        cout << a << " * " << b << "= " << a * b;
    }
    else if (op == '/')
    {
        cout << a << " / " << b << "= " << a / b;
    }
    else
    {
        cout << "invalid operator";
    }

    // switch (op)
    // {
    // case '+':
    //     cout << "a+b = " << (a + b);
    //     break;
    // case '-':
    //     cout << "a-b = " << (a - b);
    //     break;
    // case '*':
    //     cout << "a*b = " << (a * b);
    //     break;
    // case '/':
    //     cout << "a/b = " << (a / b);
    //     break;
    // default:
    //     cout << "Invalid Operator";
    // }

    return 0;
}