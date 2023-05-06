#include<iostream>
using namespace std;

    int i,j,k,l,n;
    int main(){
    cout<<"enter the rows : ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
    for(j=2*i;j>=1;j--)
    cout<<" ";
    for(k=n;k>=i;k--)
    cout<<k<<" ";
    for(l=i+1;l<=n;l++)
    cout<<l<<"  ";
    cout<<"\n"; 
    }
    }