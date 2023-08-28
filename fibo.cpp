#include<iostream>
using namespace std;

int fibo(int n){
if (n==1){
    return 1;
}
if (n==0)
{ 
    return 0;
}
return fibo(n-1)+fibo(n-2);

}

int main(){
    int x;
    cout<<"enter the term : ";
    cin>>x;
    if(x==0)
    {
        cout<<"not found";
    }
    else{
    cout<<fibo(x);
    }
    return 0;
}