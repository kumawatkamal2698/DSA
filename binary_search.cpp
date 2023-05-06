//binary_search
#include<iostream>
using namespace std;

int binary_search(int arr[],int low,int high,int key){
   int mid= (low+high)/2;
    while(low<high){
    mid = (high+low)/2;
    if(key==arr[mid])
    return mid;
    if(key>arr[mid])
    low=mid+1;
    if(key<arr[mid])
    high=mid-1;
    }
    return -1;
}
int main(){
    int n;
    int arr[n];
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter "<<n<<" elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"enter the element to be searched : ";
    cin>>x;
    cout<<binary_search(arr,0,n-1,x)+1;
    // int result=0;
    //  result= binary_search(arr,0,n-1,x);
    // if(result==-1)
    // {
    //     cout<<"not found"<<endl;
    // }
    // else{
    //     cout<<"found at :"<<result+1;
    // }
    return 0;

}
