#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "enter two number: ";
    cin >> num1 >> num2;
    char op;
    cout << "enter operator: ";
    cin >> op;

    switch (op)
    {
    case ('+'):
        cout << num1 + num2;
        cout << "\n";
        break;
    case ('-'):
        if (num1 > num2)
        {
            cout << num1 - num2;
            cout << "\n";
        }
        else if (num2 > num1)
        {
            cout << "negative value: ";
            cout << num1 - num2;
            cout << "\n";
            cout << "postive value: ";
            cout << num2 - num1;
            cout << "\n";
        }
        break;
    case ('*'):
        cout << num1 * num2;
        cout << "\n";
        break;
    case ('/'):
        if (num1 > num2)
        {
            cout << "num1 greater\n"
                 << num1 / num2;
            cout<<"\n";
        }
        else
        {
            cout << "num2 greater\n"
                 << num2 / num1;
            cout<<"\n";
        }
        break;
    default:
        cout << "enter a valid operator";
        cout << "\n";
        break;
    }
    return 0;
}