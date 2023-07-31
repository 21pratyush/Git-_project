#include<iostream>
using namespace std;

int factorial(int num){
    int f=1;
    for(int i=2;i<=num;i++){
        f*=i;
    }
    return f;
}
int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    int ans=factorial(num);
    cout<<ans<<endl;
    return 0;
}       