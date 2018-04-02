#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 1000000
ll tree[sz*5],lazy[sz*5];

ll query(ll node,ll start,ll end,ll l,ll r){
	if(lazy[node]!=0){
		tree[node]+=lazy[node];
		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(end<l||start>r){
		return INT_MIN;
	}
	else if(start>=l&&end<=r){
		return tree[node];
	}
	else{
		ll mid=(start+end)/2;
		ll p=query(2*node,start,mid,l,r);
		ll q=query(2*node+1,mid+1,end,l,r);
		return max(p,q);
	}
}


void update(ll node,ll start,ll end,ll l,ll r,ll val){
	if(lazy[node]!=0){
		tree[node]+=lazy[node];
		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(end<l||start>r){
		return ;
	}
	else if(start>=l&&end<=r){
		tree[node]+=val;
		lazy[2*node]+=val;
		lazy[2*node+1]+=val;
	}
	else{
		ll mid=(start+end)/2;
		update(2*node,start,mid,l,r,val);
		update(2*node+1,mid+1,end,l,r,val);
		tree[node]=max(tree[2*node],tree[2*node+1]);
	}
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	ll n;
	cin>>n;
	vector<pair<ll,ll> > a(n);
	set<ll> c;
	for(ll i=0;i<n;++i){
		cin>>a[i].first>>a[i].second;
		c.insert(a[i].first);
		c.insert(a[i].second);
	}
	
	ll q;
	cin>>q;
	vector<pair<ll,ll> > queries(q);
	for(ll i=0;i<q;++i){
		cin>>queries[i].first>>queries[i].second;
		c.insert(queries[i].first);
		c.insert(queries[i].second);
	}
	
	ll idx=0;
	unordered_map<ll,ll> mp;
	for(auto x:c){
		mp[x]=idx++;
	}

	for(ll i=0;i<n;++i){
		update(1,0,sz,mp[a[i].first],mp[a[i].second],1);
	}
	for(ll i=0;i<q;++i){
		cout<<query(1,0,sz,mp[queries[i].first],mp[queries[i].second])<<"\n";
	}
	
}