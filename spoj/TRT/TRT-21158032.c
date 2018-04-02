#include <bits/stdc++.h>
using namespace std;
vector<int> a;
typedef long long ll;
int dp[2004][2004];
ll profit(ll l,ll r,ll y){
	if(dp[l][r]!=-1)
		return dp[l][r];
	if(l==r){
		return dp[l][r]=y*a[l];
	}
	else{
		return dp[l][r]=max(profit(l+1,r,y+1)+y*a[l],profit(l,r-1,y+1)+y*a[r]);
	}
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int n;
	cin>>n;
	a.resize(n);
	memset(dp,-1,sizeof dp);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cout<<profit(0,n-1,1);
	
}