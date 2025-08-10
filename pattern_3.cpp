// * * * * *
// *       *
// *       *
// *       *
// * * * * *

#include<iostream>
using namespace std;

int main(){
    int n,t;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==5)
            cout<<"* ";
        }
        if(i>1 && i<n){
            cout<<"* ";
            if(n%2==0)
                t=n/2;
            else
                t=(n/2)+1;
            for(int k=1;k<=2*t;k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
}