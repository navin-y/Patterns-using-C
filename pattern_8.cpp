#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	char t='A';
	char d=t;
	for(int i=1; i<=n; i++) {
		if(i==1 || i==n)
			t='A';
		for(int j=1; j<=n; j++) {
			if(i==1 || i==n)
				cout<<t++<<" ";
			else if(j==1 || j==n)
				cout<<d++<<" ";
			else
				cout<<"  ";
		}
		cout<<"\n";
	}
}
