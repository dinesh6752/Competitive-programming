#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		
		map<int,int> mp;
		ll ans=0;
		for (int i = 0; i < n; ++i)
		{
			
			a[i]+=a[i-1];
			ans+=mp[a[i]];
			mp[a[i]]++;
			if(a[i]==0)
				ans++;
		}
		cout<<ans<<"\n";
	}
}

