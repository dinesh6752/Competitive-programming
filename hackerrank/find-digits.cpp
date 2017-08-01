#include <bits/stdc++.h>
using namespace std;
int main(){
	long n,i,j,t,k;
	cin>>t;
	for(k=0;k<t;k++){
		long c=0;
		cin>>n;
		long temp=n;
		while(n){
			if(n%10!=0&&temp%(n%10)==0)
				c++;
			n/=10;
		}
		cout<<c<<endl;
	}
}