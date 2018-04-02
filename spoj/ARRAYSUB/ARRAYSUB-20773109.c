#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int n,k;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cin>>k;
	set<pair<int,int> > sw;
	for(int i=0;i<k;++i){
		sw.insert({a[i],i});
	}
	cout<<((*sw.rbegin()).first)<<" ";
	for(ll i=k;i<n;i++){
		sw.erase({a[i-k],i-k});
		sw.insert({a[i],i});
		cout<<((*sw.rbegin()).first)<<" ";
	}
}