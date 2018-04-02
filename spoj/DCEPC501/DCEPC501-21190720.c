#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
vector<ll>  a,pref;
ll dp[100005];
ll get(ll l,ll r){
	if(l==0)
		return pref[r];

	return pref[r]-pref[l-1];
}
ll solve(ll l,ll r){
	if(l>r){
		return 0;
	}
	if(dp[l]!=-1)
		return dp[l];
	ll a1,a2,a3;
	a1=a2=a3=0;
	if(l+0<=r){
		a1=solve(l+2,r)+get(l,l+0);
		
	}
		if(l+1<=r){
		a2=solve(l+4,r)+get(l,l+1);
	}
		if(l+2<=r){
		a3=solve(l+6,r)+get(l,l+2);
	}
	return dp[l]=max({a1,a2,a3});
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof(dp));
		cin>>n;
		a.resize(n);
		pref.resize(n);
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		pref[0]=a[0];
		for(int i=1;i<n;++i){
			pref[i]=pref[i-1]+a[i];
		}	
		cout<<solve(0,n-1)<<"\n";
	}


}	
