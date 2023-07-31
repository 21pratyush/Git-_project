#include <iostream>
using namespace std;

int gcd(int n1, int n2){
       while(n2!=0){
        int rem=n1%n2;
        n1=n2;
        n2=rem;
       }  
    return n1;
}

int main(){
    int num1,num2;
    cout<<"enter num1 and num2: ";
    cin>>num1>>num2;

    cout<<gcd(num1,num2)<<endl;   
  return 0;
}