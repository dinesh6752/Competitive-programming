#include <bits/stdc++.h>
using namespace std;

std::vector<long long> a;
long long tree[50005];
long long lazy[50005];

void update(long long node,long long start,long long end,long long l,long long r,long long val){
	if(lazy[node]){
		
		if(start!=end){
			tree[2*node]+=lazy[node];
			tree[2*node+1]+=lazy[node];
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(end<l||start>r)
		return;
	else if(start>=l&&end<=r){
		tree[node]+=val;
		lazy[node]+=val;
	}
	else{
		long long mid=(start+end)>>1;
		update(2*node,start,mid,l,r,val);
		update(2*node+1,mid+1,end,l,r,val);

	}
}

void query(long long node,long long start,long long end,long long l,long long r){
	
	if(lazy[node]){
		
		if(start!=end){
			tree[2*node]+=lazy[node];
			tree[2*node+1]+=lazy[node];
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(end<l||start>r)
		return;
	else if(start>=l&&end<=r){
		cout<<tree[node]<<"\n";
	}
	else{
		long long mid=(start+end)>>1;
		query(2*node,start,mid,l,r);
		query(2*node+1,mid+1,end,l,r);

	}
}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	long long t;
	cin>>t;
	while(t--){
		long long n,u,q;
		cin>>n>>u;
		for(long long k=0;k<5*n;k++){
			lazy[k]=tree[k]=0;
		}
		a.resize(n);
		while(u--){
			long long l,r,val;
			cin>>l>>r>>val;
			update(1,0,n-1,l,r,val);
		}
		cin>>q;
		while(q--){
			long long idx;
			cin>>idx;
			query(1,0,n-1,idx,idx);
		}
		a.clear();
	}

}