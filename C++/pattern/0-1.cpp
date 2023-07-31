#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }else{
                cout<<"0"<<" ";
            }
        }cout<<endl;
    }
    cout<<"rhombus"<<endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=5;j++){
            cout<<"0 ";
        }cout<<endl;
    }

} 