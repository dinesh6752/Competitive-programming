#include <bits/stdc++.h>
using namespace std;
int main(){
	long i,j,n,r=0;
	cin>>n; 
	for(j=2;j*j<=n;j++){
		for(i=j*j;i<=n;i=i+j){
			r++;
		}	
	}
	
	cout<<r+n;
}