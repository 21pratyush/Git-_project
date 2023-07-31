#include <iostream>
using namespace std;

int linearsearch(int arr[],int n,int f){
     for(int i=0;i<n;i++){
        if(arr[i]==f){
            return i;
        }
    }return -1;
}
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int f;
    cout<<"enter number you want to find: ";
    cin>>f;
    
    cout<<"index value of "<<f<<": "<<linearsearch(arr,n,f)<<endl;

  return 0;
}  