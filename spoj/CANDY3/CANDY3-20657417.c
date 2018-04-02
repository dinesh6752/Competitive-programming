#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	typedef  long long ll;
	ll n,b,k,t,tt=0;;
	cin>>t;
	while(t--){
		cin>>n;
		std::vector<ll> a(n);
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		
		
		k=0;
		for(ll i=0;i<n;i++){
			k=(k%n+a[i]%n)%n;
			
		}
		//cout<<k<<endl;
		cout<<(n!=0&&k%n==0?"YES\n":"NO\n");
	}
}