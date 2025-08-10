#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char t='A';
    for(int i=1;i<=n;i++){
        string res;
        for(int j=1;j<=i;j++){
            res+=t;
            if(j<i)
                res+=' ';
            t++;
        }
        if(i%2==0){
            reverse(res.begin(),res.end());
            cout<<res;
        }
        else
            cout<<res;
        cout<<"\n";
    }
}