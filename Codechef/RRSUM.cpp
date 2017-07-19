#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,a,b,c;

int  count(ll x){
	if(x<n+2){
		return 0;
	}
	else if(x<2*n+1){
		return x-(n+1);
	}
	else  return (3*n+1)-x;

}

int main(){

	ll m,x;

	cin>>n>>m;
	while(m--){

		cin>>x;
		cout<<count(x)<<endl;
	}
}