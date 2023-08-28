#include<bits/stdc++.h>
using namespace std;

int hours(int n,int t,int E[],int J[]){
    int totalenergy=0; // 
    int i=0;
    int count=0;
    while(totalenergy<t){
         //i =0  e[0]
        while(i!=n-1){
        while(totalenergy<J[i]){
                totalenergy+=E[i];
                count++;
                // cout<<"1";
        }
                totalenergy-=J[i];
                count++;
                // cout<<"2";
        i++;
        }
        totalenergy+=E[i];
        count++;
        // cout<<"3";
    }
    // cout<<count;
    // cout<<endl;
    cout<<"Hours = ";
    return count;
}

int main(){
    int n,t;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>t;
    int E[n],J[n-1];
    for(int i=0;i<n;i++){
        cin>>E[i];
        // cout<<E[i]<<" ";
    }
    
    for(int i=0;i<n-1;i++){
        cin>>J[i];
        // cout<<J[i]<<" ";
    }
    
    cout<<hours(n,t,E,J);
    return 0;
}