#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "enter row and column: ";
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        cout << endl;
        for (int j = 1; j <= c; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "HOLLOW" << endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || i == r)
            {
                cout << "* ";
            }
            else if (j == 1 || j == c)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}