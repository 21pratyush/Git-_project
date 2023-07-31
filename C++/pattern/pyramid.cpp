#include <iostream>
using namespace std;

int main(){
    cout<<"Pyramid"<<endl;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    int n;
    cout<<"enter num: ";
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<< " ";
            count++;
        }cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"1"<< " ";
        }cout<<endl;
    }
    return 0;
}
}   