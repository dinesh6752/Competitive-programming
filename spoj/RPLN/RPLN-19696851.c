#include <bits/stdc++.h>
using namespace std;
#define sz 100000
int tree[sz*5];
std::vector<int> a;

void  build(int node,int start,int end){
	if(start==end){
		tree[node]=a[start];
	}
	else{
		int mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}

int query(int node,int start,int end,int l,int r){
	if(end<l||start>r){
		return INT_MAX;
	}
	else if(start>=l&&end<=r){
		return tree[node];
	}
	else{
		int mid=(start+end)/2;
		return min(query(2*node,start,mid,l,r),query(2*node+1,mid+1,end,l,r));
	}

}
int main(){
	int i,j,n,tt,q,l,r,k;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>tt;
	for(j=1;j<=tt;j++){
		cin>>n>>q;;
		a.resize(n);
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		//memset(tree,0,sizeof(tree));
		build(1,0,n-1);
		
		/*for(k=0;k<50;k++){
			cout<<tree[k]<<" ";
		}*/
		cout<<"Scenario #"<<j<<":\n";
		while(q--){
			cin>>l>>r;
			l--;
			r--;
			cout<<query(1,0,n-1,l,r)<<endl;

		}
		a.clear();
	}
}
