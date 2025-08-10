#include<iostream>
using namespace std;

int main(){
    int n,x=0;
    char t='A';
    cin>>n;
    for(int i=n;i>=1;i--){
        char d=t;
        for(int k=1;k<=x;k++)
            cout<<" ";
        for(int j=1;j<=i;j++){
            cout<<d;
            d++;
        }
        t++;
        x++;
        cout<<"\n";
    }
}