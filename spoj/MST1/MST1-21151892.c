#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[(int)3e7];
ll solve(ll n){
	if(dp[n]!=-1)
		return dp[n];
	if(n==1)
		return 0;
	else{
		ll s1,s2,s3;
		s1=s2=s3=INT_MAX;
		if(n%2==0){
			s1=solve(n/2);
		}
		if(n%3==0)
			s2=solve(n/3);
		s3=solve(n-1);
		return (dp[n]=min({s1,s2,s3})+1);
	}
		
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	memset(dp,-1,sizeof dp);
	cin>>t;
	ll cs=1;
	while(t--){
		ll n;
		cin>>n;
		cout<<"Case "<<cs++<<": "<<solve(n)<<"\n";
	}
}