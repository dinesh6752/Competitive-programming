#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




long long tree[1000005*4],lazy[1000005*4];
vector<int> a;
 

void build(long long node,long long start,long long end){
	if(start==end){
		tree[node]=1;
	}
	else{
		long long mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}
 
void update(long long node,long long start,long long end,long long l,long long r,long long val){
	if(lazy[node]==-1){
		tree[node]=0;
		if(start!=end){
			lazy[2*node]=-1;
			lazy[2*node+1]=-1;
		}
		lazy[node]=0;
	}
	if(start>r||end<l){
		return;
	}
	else if(start>=l&&end<=r){
		tree[node]=0;
		 if(start != end)
        {
           
            lazy[node*2] =-1;
            lazy[node*2+1] =-1;
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
	if(lazy[node]==-1){
		tree[node]=0;
		if(start!=end){
			lazy[2*node]=-1;
			lazy[2*node+1]=-1;
		}
		lazy[node]=0;
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
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	
	cin>>n;
	build(1,0,n-1);
	a.resize(n+1);
	for(int i=1;i<=n;i++)
		cin>>a[i];

//cout<<"dfd";
	for(int i=1;i<=n;i++){
		//cout<<"dfd";
		
		if(i-a[i]<=0){
			//cout<<"kill u"<<0<<" "<<i-1<<"\n";
			update(1,0,n-1,0,i-2,0);
		}
		else {
			//cout<<"kill d"<<i-a[i]-1<<" "<<i-1<<"\n";
			update(1,0,n-1,i-a[i]-1,i-2,0);
		}
	}

	cout<<query(1,0,n-1,0,n-1);
}