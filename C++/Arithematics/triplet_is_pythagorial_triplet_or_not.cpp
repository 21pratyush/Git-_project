#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int h = max(x, max(y, z));
    int p, b;

    if (h == x)
    {
        p = y;
        b = z;
    }
    else if (h == y)
    {
        p = x;
        b = z;
    }
    else
    {
        p = x;
        b = y;
    }
    if (h * h == (p * p) + (b * b))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (check(x, y, z))
    {
        cout << "pythagorean triplet";
    }
    else
    {
        cout << "not a pythagorean triplet";
    }
    return 0;
}