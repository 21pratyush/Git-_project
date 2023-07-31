#include <iostream>
using namespace std;

//find the number divisible by a & b and the excluding common number divisible by both a &
int divisible(int n, int a, int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);

    return c1+c2-c3;
}

int main(){
    int n,a,b;
    cout<<"enter last_num, num1 and num2: ";
    cin>>n>>a>>b;
    
    cout<<divisible(n,a,b);
    cout<<endl;    
  return 0;
}