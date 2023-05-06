#include<iostream>
using namespace std;
int linear_search(int arr[], int key,int x){

    for(int i=0;i<x;i++)
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int element;
    cout<<"enter the element to be searched : ";
    cin>>element;
    int x;
    cout<<"enter size of an array"<<endl;
    cin>>x;
    int arr[x];
    cout<<"enter the elements : ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<"elements are : ";
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans = linear_search(arr,element,x);
if (ans==-1){
    cout<<"not found";
}
else{
    cout<<"element found at location "<<ans+1;
}
    return 0;
}