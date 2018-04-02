#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll m= 10000007;
ll me(ll x,ll n){
	ll res=1;
	while(n>0){
		if(n&1){
			res=((res%m)*(x%m))%m;
		}
		x=((x%m)*(x%m))%m;
		n>>=1;

	}
	return res%m;
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	ll n,k;
	while(1){
		cin>>n>>k;
		if(n==0)
			return 0;
		else
			cout<<(me(n,n)%m+me(n,k)%m+(2*me(n-1,n-1))%m+(2*me(n-1,k)%m))%m<<"\n";
	}
}