#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int x,ans=INT_MAX;
		cin>>n;
		bool ok=0;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>x;
			mp[x]++;
			if(n&1){
				if(mp[x]>=n/2+1){
					ok=1;
					ans=x;
				}

			}
			else{
				if(mp[x]>n/2){
					ok=1;
					ans=x;
				}
			}
		}
		if(ok){
			cout<<"YES "<<ans<<"\n";
		}
		else{
			cout<<"NO\n";
		}
	}

}