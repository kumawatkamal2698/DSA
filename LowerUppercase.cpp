#include<iostream>
using namespace std;
int main(){
   // string x;
    char a[100];
    char n;
    int y;
    cout<<endl<<"1.Lower to Upper"<<endl<<"2.Upper to Lower"<<endl<<"enter your choice : ";
    cin>>y;
    cout<<"enter the string : ";
    cin>>a;

    int z;
    // cout<<"enter the size of string"<<endl;
    // cin>>z;
int count=0;
    for(int i=0;i<100;i++){
        if(a[i]=='\0'){
        break;
        }
        count++;
    }
z= count;
    if(y==1){
    cout<<"string in upper case is : ";
    for(int i=0;i<z;i++)
    {
        //lower to upper
        if(97<=a[i]<=122){
        n=a[i]-32;
        }
        cout<<n<<"";
    }
    }
    else{
        //upper to lower
    cout<<"string in lower case is : ";
    for(int i=0;i<z;i++){
        if(65<=a[i]<=90){
            n=a[i]+32;
        }
            cout<<n<<"";
    }
    
    }
 //   cout<<'K'-'+'<<endl;
    return 0;
}
