#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const int sz=1e6+7;
int p[sz];
int a[sz];
void phi(){

	p[1]=1;
	for(int i=0;i<sz;i++){
		p[i]=i;
		a[i]=1;
	}
	for(int i=2;i<sz;i++){
		if(p[i]==i){
			for(int j=2*i;j<sz;j+=i){
			if(p[j]%i==0)
			p[j]-=p[j]/i;
			}	
		}
		
	}
	for(int i=2;i<sz;i++){
		if(p[i]==i)
			p[i]=i-1;
	}
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	phi();
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<p[n]<<"\n";
	}
}