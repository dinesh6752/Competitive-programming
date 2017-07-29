#include <bits/stdc++.h>
using namespace std;

int rev(int n){
	int t=0,s=0;
	while(n){
		t=t*10+n%10;
		n/=10;
	}
	return t;
}
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		cout<<rev(rev(n)+rev(m))<<endl;
	}
}