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
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=-n;i<n;i++){
        for(int j=0;j<abs(n);j++){
                cout<<" ";
        }
        for(int k=1;k<n+i;k++){
               
            cout<<"*";
        }
        cout<<"\n";
    }
}