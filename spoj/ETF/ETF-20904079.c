#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const ll sz=1e6+7;
ll phi[sz];
void etf(){
	phi[1]=1;
	for(ll i=0;i<sz;i++){
		phi[i]=i;
	}
	for(ll i=2;i<sz;i++){
		if(phi[i]==i){
			for(ll j=2*i;j<sz;j+=i){
			phi[j]-=phi[j]/i;
			}	
		}	
	}
	for(ll i=2;i<sz;i++){
		if(phi[i]==i)
			phi[i]=i-1;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	etf();
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<phi[n]<<"\n";
	}
}