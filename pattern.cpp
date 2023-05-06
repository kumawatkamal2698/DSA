#include<iostream>
using namespace std;

    int i,j,k,l,n;
    int main(){
    cout<<"enter the rows : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    for(j=2*(n-i);j>=1;j--)
    cout<<" ";
    for(k=1;k<=i;k++)
    cout<<k<<" ";
    for(l=i-1;l>=1;l--)
    cout<<l<<" ";
    cout<<"\n"; 
    }
    }