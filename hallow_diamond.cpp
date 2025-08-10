//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *

#include<iostream>
//#include<cstdlib>
using namespace std;

int main(){
    int n,d=1;
    cin>>n;
    for(int i=-n+1;i<n;i++){
        for(int j=abs(i);j>=0;j--)
            cout<<" ";
        for(int k=1;k<=d;k++){
            if(k==1 || k==d)
                cout<<"*";
            else
                cout<<" ";
        }
        if(i<0)
            d+=2;
        else
            d-=2;
        cout<<"\n";
    }
}