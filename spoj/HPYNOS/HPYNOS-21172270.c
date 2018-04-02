#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll> mp;
int k=0;
bool solve(ll n){
	ll tmp=0;
	k++;
	if(mp[n])
	return 0;
	mp[n]=1;
	while(n){
		tmp+=(n%10)*(n%10);
		n/=10;
	}
	if(tmp==1){
	
		return 1;
	}
	else{
		return solve(tmp);
	}
}
int main(){
	ll n;
	cin>>n;
	if(solve(n))
	cout<<k;
	else
	cout<<"-1";
}