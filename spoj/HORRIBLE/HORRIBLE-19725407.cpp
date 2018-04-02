#include <iostream>
//#include<conio.h>
using namespace std;

unsigned long long tree[400005],lazy[400005];

void update(unsigned long long node,unsigned long long start,unsigned long long end,unsigned long long l,unsigned long long r,unsigned long long val){
	
	if(lazy[node]!=0){
		tree[node]+=(end-start+1)*lazy[node];

		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(l>end||start>r)
		return;
	else if(start>=l&&end<=r){
		tree[node]+=((end-start+1)*val);
		if(start!=end){
			lazy[2*node]+=val;
			lazy[2*node+1]+=val;
		}	
	
	}
	else{
		unsigned long long mid=(start+end)/2;
		update(2*node,start,mid,l,r,val);
		update(2*node+1,mid+1,end,l,r,val);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
}

unsigned long long query(unsigned long long node,unsigned long long start,unsigned long long end,unsigned long long l,unsigned long long r){
	
	if(lazy[node]!=0){
		tree[node]+=(end-start+1)*lazy[node];
		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(end<l||start>r)
		return 0;
	else if(start>=l&&end<=r){
		return tree[node];
	}
	else{
		unsigned long long mid=(start+end)/2,p,q;
		p=query(2*node,start,mid,l,r);
		q=query(2*node+1,mid+1,end,l,r);
		return p+q;

	}

}
int main(){
	unsigned long long l,r,x,y,n,i,j,q,type,tc;
	//clrscr();
	cin>>tc;
	while(tc--){
		fill(tree,tree+400005,0);
		fill(lazy,lazy+400005,0);
		cin>>n>>q;
		while(q--){
			cin>>type;
			if(type==0){
				cin>>l>>r>>x;
				update(1,0,n-1,l-1,r-1,x);
			}
			else
			{
				cin>>l>>r;
				
				cout<<query(1,0,n-1,l-1,r-1)<<endl;
			}
		}	
	}
	
	
	return 0;
}