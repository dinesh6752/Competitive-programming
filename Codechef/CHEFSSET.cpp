#include <bits/stdc++.h>
using namespace std;
 
#define mx 1000009
typedef unsigned long long ll;
 
int spf[mx];
 
void sieve(){
	ll i,j;
	for(i=2;i<=mx;i++){
 
		if(!spf[i]){
 
			for(j=i;j*i<=mx;j++){
				if(!spf[i*j]){
					spf[i*j]=i;
				}
			}
		}
	}
	for(i=2;i<=mx;i++)
	{
		if(spf[i]==0)
			spf[i]=i;
	}
 
}
 
int main(){
	
	sieve();
	int t,n,i,j;
	ll c=0;
	cin>>t;
	while(t--){
		cin>>n;
		c=0;
		vector<int> a(n);
		map<int,int> oddFactor;
		for(i=0;i<n;i++){
			cin>>a[i];
			map<int,int> tmp;
			while(a[i]!=1){
				tmp[spf[a[i]]]++;
				a[i]/=spf[a[i]];
			}
			for(auto x:tmp){
				if(x.second&1){
					oddFactor[x.first]++;
				}
			}
		}
		for(auto x:oddFactor){
			c+=min(x.second,n-x.second);
		}
		cout<<c<<endl;
	}
 
 
}
 
