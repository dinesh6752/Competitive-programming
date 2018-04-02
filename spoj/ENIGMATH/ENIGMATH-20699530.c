#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		ll l=(a*b)/__gcd(a,b);
		cout<<l/a<<" "<<l/b<<"\n";

	}

}