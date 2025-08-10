// *
// # *
// * # *
// # * # *


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch='*';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            if(ch=='*')
                ch='#';
            else
                ch='*';
        }
        cout<<"\n";
    }
    return 0;
}
