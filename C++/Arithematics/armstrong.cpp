#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num;
    // cout << "enter num:";
    cin >> num;

    int sum = 0;
    int originaln = num;
    for(int i=num;i>0;i--){
        int lastdigit=num%10;
        sum+=pow(lastdigit,3);
        num=num/10;
    }
    if (sum== originaln)
    {
        cout << "it is armstrong number" << endl;
    }
    else
    {
        cout << "it is not a armstrong number" << endl;
    }
    return 0;
}
