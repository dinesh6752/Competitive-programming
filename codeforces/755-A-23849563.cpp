#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
	if(n==1) return false;

	for( int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int m,n,i;
	cin>>n;
	for(i=1;i<=1000;i++){
		if(!isprime(i*n+1)){
			break;
		}
	}
	cout<<i;
}