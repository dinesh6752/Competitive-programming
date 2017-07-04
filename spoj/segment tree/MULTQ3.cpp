#include <iostream>
//#include<conio.h>
using namespace std;
typedef unsigned long long ull;
ull lazy[400005];
struct T
{
	ull a,b,c;
}tree[400005];

void build(long long node,long long start,long long end){
	if(start==end){
		tree[node].a=1;
		tree[node].b=0;
		tree[node].c=0;
	}
	else{
		long long mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node].a=tree[2*node].a+tree[2*node+1].a;
		tree[node].b=tree[2*node].b+tree[2*node+1].b;
		tree[node].c=tree[2*node].c+tree[2*node+1].c;
	}
}
void update(ull node,ull start,ull end,ull l,ull r){
	
	if(lazy[node]!=0){
		lazy[node]%=3;
		for (int i = 0; i < lazy[node]; ++i)
		{
			ull temp=tree[node].c;
			tree[node].c=tree[node].b;
			tree[node].b=tree[node].a;
			tree[node].a=temp;
		}

		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(l>end||start>r)
		return;
	else if(start>=l&&end<=r){
		
			ull temp=tree[node].c;
			tree[node].c=tree[node].b;
			tree[node].b=tree[node].a;
			tree[node].a=temp;
		
		if(start!=end){
			lazy[2*node]++;
			lazy[2*node+1]++;
		}	
	
	}
	else{
		ull mid=(start+end)/2;
		update(2*node,start,mid,l,r);
		update(2*node+1,mid+1,end,l,r);
		tree[node].a=tree[2*node].a+tree[2*node+1].a;
		tree[node].b=tree[2*node].b+tree[2*node+1].b;
		tree[node].c=tree[2*node].c+tree[2*node+1].c;
	}
}

ull query(ull node,ull start,ull end,ull l,ull r){
	
	if(lazy[node]!=0){
		lazy[node]%=3;
		for (int i = 0; i < lazy[node]; ++i)
		{
			ull temp=tree[node].c;
			tree[node].c=tree[node].b;
			tree[node].b=tree[node].a;
			tree[node].a=temp;
		}
		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(end<l||start>r)
		return 0;
	else if(start>=l&&end<=r){
		return tree[node].a;
	}
	else{
		ull mid=(start+end)/2,p,q;
		p=query(2*node,start,mid,l,r);
		q=query(2*node+1,mid+1,end,l,r);
		return p+q;

	}

}
int main(){
	ull l,r,x,y,n,i,j,q,type,tc;
	//clrscr();
	ios_base::sync_with_stdio(0);
	cin.tie(0);
		
		
		cin>>n>>q;
		build(1,0,n-1);
		while(q--){
			cin>>type;
			if(type==0){
				cin>>l>>r;
				update(1,0,n-1,l,r);
			}
			else
			{
				cin>>l>>r;
				
				cout<<query(1,0,n-1,l,r)<<"\n";
			}
		
		}
	
	
	return 0;
}