#include<iostream>
using namespace std;
int power(int x,int y){
    if(y==0){
        return 1;
    }
    return x*power(x,y-1);
}
int main(){
    int x,y;
    cout<<"enter the number : ";
    cin>>x;
    cout<<"enter the power : ";
    cin>>y;
    int z=power(x,y);
    cout<<z;
    return 0;
}