#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	ll t,tc=1;;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> a(n),dp(n);
		for(ll i=0;i<n;++i){
			cin>>a[i];
		}
		ll ans;
		if(n==0)
			ans=0;
		else if(n==1)
			ans=a[0];
		else if(n==2)
			ans=max(a[0],a[1]);
		else if(n==3)
			ans=max(a[0]+a[2],a[1]);
		else{
			dp[0]=a[0];
			dp[1]=max(a[0],a[1]);
			dp[2]=max(a[0]+a[2],a[1]);
			for(ll i=3;i<n;i++){
				dp[i]=max(dp[i-2]+a[i],dp[i-3]+a[i]);
				//cout<<dp[i]<<" "<<a[i]<<"\n";
			}
			ans=dp[0];
			for(int i=0;i<n;++i){
				ans=max(ans,dp[i]);
			}
			cout<<"Case "<<tc++<<": "<<ans<<"\n";
			continue;
		}
		cout<<"Case "<<tc++<<": "<<ans<<"\n";
	}
	
} 