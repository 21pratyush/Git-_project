#include <iostream>
using namespace std;

int main(){
    int arr[]={10,20,30};
    cout<<"----------------------------------"<<endl;
    cout<<"Accessing array through pointers"<<endl;
    cout<<"----------------------------------"<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
}