#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<ll,ll> a,pair<ll,ll> b){
	if(a.first>b.first)
		return 1;
	else if(a.first==b.first){
		return a.second>b.second;
	}
	else
		return 0;
}
int main(){
	
	ll n,k;
	cin>>n>>k;
	vector<int> cs(n);
	vector<pair<ll ,ll> >  a(n);
	for(int i=0;i<n;++i){
		cin>>a[i].first;
		cs[i]=a[i].first;
		a[i].second=i+1;
	}
	sort(a.begin(), a.end(),cmp);
	ll cost=0,p=k;
	vector<int> f(n+k,-1);
	
	for(int i=0;i<n;i++){
		if(a[i].second>k&&f[a[i].second-1]==-1){
			
			f[a[i].second-1]=a[i].second;
			continue;
		}
		
		// /p++;
		while(p<n+k-1&&f[p]!=-1){
			p++;
		}
		f[p]=a[i].second;
	}
	unordered_map<ll,ll> mp;
	for(int i=0;i<n+k;i++){
		if(f[i]>-1){
			mp[f[i]]=i+1;
		}
	}
	for(int i=0;i<n;++i){
		cost+=((mp[i+1]-(i+1))*cs[i]);
	}
	cout<<cost<<"\n";
	for(int i=0;i<n;++i){
		cout<<mp[i+1]<<" ";
	}

}