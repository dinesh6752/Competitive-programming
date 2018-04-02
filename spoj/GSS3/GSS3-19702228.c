#include <bits/stdc++.h>
using namespace std;
#define sz 100006

class z
{
public:
	long long l,r,s,b;
	
};

z tree[sz*5];
std::vector<int> a;

void  build(int node,int start,int end){
	if(start==end){
		tree[node].b=a[start];
		tree[node].s=a[start];
		tree[node].l=a[start];
		tree[node].r=a[start];
		//cout<<start+1<<" "<<end+1<<" "<<tree[node].s<<" "<<tree[node].b<<endl;
	}
	else{
		int mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node].s=tree[2*node].s+tree[2*node+1].s;
		tree[node].l=max(tree[2*node].l,tree[2*node].s+tree[2*node+1].l);
		tree[node].r=max(tree[2*node+1].r,tree[2*node+1].s+tree[2*node].r);
		tree[node].b=max({tree[2*node].b,tree[2*node+1].b
		,tree[node].l
		,tree[node].r,tree[2*node].r+tree[2*node+1].l});
		
		//cout<<start+1<<" "<<end+1<<" "<<tree[node].s<<" "<<tree[node].l<<" "<<tree[node].r<<" "<<tree[node].b<<endl;
	}
}

z query(int node,int start,int end,int l,int r){
	if(end<l||start>r){
		z temp;
		temp.r=temp.l=temp.b=temp.s=INT_MIN;
		return temp;
	}
	else if(start>=l&&end<=r){
		return tree[node];
	}   
	else{
		int mid=(start+end)/2;
		z foo,p,q;
		p=query(2*node,start,mid,l,r),q=query(2*node+1,mid+1,end,l,r);
		foo.s=p.s+q.s;
		foo.l=max(p.l,p.s+q.l);
		foo.r=max(q.r,q.s+p.r);
		foo.b=max({p.b,q.b,p.l,q.r,p.r+q.l});
		return foo;

	}

}

void update(int node,int start,int end,int l,int r,int val){
	if(end<l||start>r){
		
		return;
	}
	else if(start>=l&&end<=r){
		tree[node].b=val;
		tree[node].s=val;
		tree[node].l=val;
		tree[node].r=val;
		//cout<<"b"<<start+1<<end+1<<" "<<tree[node].s<<" "<<tree[node].b<<endl;
	}   
	else{
		int mid=(start+end)/2;
		update(2*node,start,mid,l,r,val);
		update(2*node+1,mid+1,end,l,r,val);
		tree[node].s=tree[2*node].s+tree[2*node+1].s;
		tree[node].l=max(tree[2*node].l,tree[2*node].s+tree[2*node+1].l);
		tree[node].r=max(tree[2*node+1].r,tree[2*node+1].s+tree[2*node].r);
		tree[node].b=max({tree[2*node].b,tree[2*node+1].b
		,tree[node].l
		,tree[node].r,tree[2*node].r+tree[2*node+1].l});
		
	}

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,l,r,q,i,j;
	cin>>n;;
	a.resize(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	build(1,0,n-1);
	
	cin>>m;
	while(m--){
		cin>>q>>l>>r;
		l--;
		r--;
		if(q==0)
			update(1,0,n-1,l,l,r+1);
		else
		cout<<query(1,0,n-1,l,r).b<<endl;
	}
}
