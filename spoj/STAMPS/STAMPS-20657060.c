#include<bits/stdc++.h>
using namespace std;
int main(){
	typedef long long ll;
	ll n,b,k,t,tt=0;;
	cin>>t;
	while(t--){
		cin>>b>>n;
		std::vector<int> a(n);
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end(),greater<ll>());
		ll i;
		k=0;
		for( i=0;i<n;i++){
			k+=a[i];
			if(k>=b)
				break;
		}
		cout<<"Scenario #"<<++tt<<":\n";
		puts(k>=b?to_string(i+1).c_str():"impossible");
	}
}