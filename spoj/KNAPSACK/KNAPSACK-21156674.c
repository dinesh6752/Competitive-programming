#include <bits/stdc++.h>
typedef long long ll;
ll v[2100],w[2100];
ll dp[2005][2005];
using namespace std;
ll kp(ll W,ll n){
	//cout<<n<<" "<<W<<"\n";
	if(n==0||W<=0)
		return 0;
	if(dp[n-1][W]!=-1)
		return dp[n-1][W];
	
	if(W<w[n-1]){
		return (dp[n-1][W]=kp(W,n-1));
	}
	else{
		return (dp[n-1][W]=max(v[n-1]+kp(W-w[n-1],n-1),kp(W,n-1)));
	}
}
int main(){
	ll n,s;

	cin>>s>>n;
	memset(dp,-1,sizeof dp);
	for(ll i=0;i<n;i++){
		cin>>w[i]>>v[i];
	}

	cout<<kp(s,n);
}