#include <bits/stdc++.h>
using  namespace std;
bool isP[100006]={0};
typedef  long long ll;
ll p(ll m,ll n){
	fill(isP,isP+100006,true);
    ll c=0;
	for(ll i=2;i*i<=n;i++){

		for(ll j=max(i*i,((m+i-1)/i)*i);j<=n;j+=i){
			isP[j-m]=false;
		}
	}
	/*for(int i=0;i<13;i++){
		cout<<m+i<<" "<<isP[i]<<" ";
	}*/
	for(ll j=0;j<=n-m;j++){
		if(isP[j]==true&&m+j!=1){
			cout<<m+j<<"\n";
		}
	}
	return c;
}
int main(){
    ios_base::sync_with_stdio(false);
	ll t,m,n;
	cin>>t;
	while(t--){
		cin>>m>>n;
        p(m,n);
	}
}
