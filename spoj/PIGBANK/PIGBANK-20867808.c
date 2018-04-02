#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll unbounded_knapsack(vector<ll> w,vector<ll> v,ll W){
	vector<ll> dp(W+1,1e9);
	dp[0]=0;
	for(int i=0;i<v.size();i++){
		for(int j=1;j<=W;j++){
			if(j-w[i]>=0)
				dp[j]=min(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	return dp[W];
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll e,f,ans;
		cin>>e>>f;
		ll W=f-e;
		ll n;
		cin>>n;
		vector<ll> w(n),v(n);
		for(int i=0;i<n;++i){
			cin>>v[i]>>w[i];
		}
		if((ans=unbounded_knapsack(w,v,W))==1e9){
			cout<<"This is impossible.\n";
		}
		else{
			cout<<"The minimum amount of money in the piggy-bank is "<<ans<<".\n";
		}
	}
}