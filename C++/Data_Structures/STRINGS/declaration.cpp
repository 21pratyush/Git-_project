#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "enter string: ";
    getline(cin, str);
    cout << str << endl;
    bool check;
    cout << "type 0 for exit and 1 for single word output string:";
    cin >> check;

    if (check == 0)
    {
        return 0;
    }
    else
    {
        cout << "enter string: ";
        cin >> str;
        cout << str << endl;
    }
    return 0;
}