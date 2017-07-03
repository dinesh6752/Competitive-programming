#include <bits/stdc++.h>
#define maxn 1000003
using namespace std;

long long tree[10005*4],lazy[10005*4];
long long a[10005+1],isPrime[maxn];

void sieve(){
	long long  i,j;
	fill(isPrime,isPrime+maxn,1);
	isPrime[0]=isPrime[1]=0;
	for(i=2;i<=maxn;i++){
		if(isPrime[i]==1){
			for(j=i*i;j<=maxn;j+=i)
			{
				isPrime[j]=0;
			}
		}	
	}
}

void build(long long node,long long start,long long end){
	if(start==end){
		tree[node]=isPrime[a[start]];
	}
	else{
		long long mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}

void update(long long node,long long start,long long end,long long l,long long r,long long val){
	if(lazy[node]!=-1){
		if(isPrime[lazy[node]]){
			tree[node]=(end-start+1);
		}
		else{
			tree[node]=0;
		}
		if(start!=end){
			lazy[2*node]=lazy[node];
			lazy[2*node+1]=lazy[node];
		}
		lazy[node]=-1;
	}
	if(start>r||end<l){
		return;
	}
	else if(start>=l&&end<=r){
		if(isPrime[val]){
			tree[node]=(end-start+1);
		}
		else{
			tree[node]=0;
		}	
		if(start!=end){
			lazy[2*node]=val;
			lazy[2*node+1]=val;
		}
		
	}
	else{
		long long mid=(start+end)/2;
		update(2*node,start,mid,l,r,val);
		update(2*node+1,mid+1,end,l,r,val);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}
long long query(long long node,long long start,long long end,long long l,long long r){
	//cout<<"inf";
	if(lazy[node]!=-1){
		if(isPrime[lazy[node]]){
			tree[node]=(end-start+1);
		}
		else{
			tree[node]=0;
		}
		if(start!=end){
			lazy[2*node]=lazy[node];
			lazy[2*node+1]=lazy[node];
		}
		lazy[node]=-1;
	}
	if(l>end||start>r){
		return 0;
	}
	else if(start>=l&&end<=r){
			return tree[node];
	}
	else{
		long long mid=(start+end)/2,p,q;
		p=query(2*node,start,mid,l,r);
		q=query(2*node+1,mid+1,end,l,r);
		return p+q;
	}
}
int main(){
	long long l,r,x,y,n,i,j,q,type,tc,t=1;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	sieve();
	cin>>tc;
	while(tc--){
		cout<<"Case "<<t++<<":\n";
		fill(lazy,lazy+4*10005,-1);
		fill(tree,tree+4*10005,0);
		cin>>n>>q;
		for(i=0;i<n;i++)
			cin>>a[i];
		build(1,0,n-1);
		
		while(q--){
			cin>>type;
			if(type==0){
				cin>>l>>r>>x;
				update(1,0,n-1,l-1,r-1,x);
			}
			else
			{
				cin>>l>>r;
				//cout<<"q";
				cout<<query(1,0,n-1,l-1,r-1)<<'\n';
			}
		}	
	}
	
	//getch();
	return 0;
}