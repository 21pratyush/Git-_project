#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter array size: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"enter "<<i+1<<"th element: ";
        cin>>arr[i]; 
    } 
    cout<<"-----------\n";
    cout<<"Input Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"-----------\n";
    //options
    int value;
    cout<<"ENTER VALUE:\n 1.bubble-sort \n 2.selection-sort\n 3.Insertion-sort"<<endl;
    cout<<"-----------\n";
    cin>>value;
    cout<<"-----------\n";
    switch(value){
    case 1 :
    //bubble-sort
    cout<<"bubble-sort: ";
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    } 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
     break;
    case 2: 
    //selection sort
    cout<<"selection sort: ";
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }       
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    break;

    case 3:    
    //insertion-sort
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
      arr[j+1]=current;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
       break;
  
    default:
        cout<<"enter valid number"<<endl;
        break;
    }
  return 0;
}