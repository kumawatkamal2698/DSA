#include<iostream>
using namespace std;
double divu(int x,int y){
    return x/y;
}
double perc(double x,double y)
{
    return (x/y)*100;   
    }
    
    int main(){
    int a,b;
    int *poi =&a;
    cout<<"enter two numbers : ";
    cin>>a>>b;
    double (*p)(double,double) = &perc;
    //p=&divu;
    int divi;
    divi=(*p)(*poi,b);
    cout<<divi<<"%";
    return 0;
}