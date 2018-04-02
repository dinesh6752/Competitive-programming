#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


#define sz 100000
vector<int>  tree[sz*5];
std::vector<int> a;
 vector<int> nothing;
 vector<int> merge(vector<int> a,vector<int> b){
 	vector<int> temp;
 	for(int i=0;i<b.size();i++)
 		temp.push_back(b[i]);
 	for(int i=0;i<a.size();i++)
 		temp.push_back(a[i]);
 	sort(temp.begin(), temp.end());
 	return temp;
 }
void  build(int node,int start,int end){
	if(start==end){
		tree[node]=vector<int> (1,a[start]);
	}
	else{
		int mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node]=merge(tree[2*node],tree[2*node+1]);
	}
}
 
vector<int>  query(int node,int start,int end,int l,int r){
	if(end<l||start>r){
		
		return  nothing;
	}
	else if(start>=l&&end<=r){
		return tree[node];
	}
	else{
		int mid=(start+end)/2;
		vector<int> p=query(2*node,start,mid,l,r);
		vector<int> q=query(2*node+1,mid+1,end,l,r);
		return merge(p,q);
	}
 
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
	cin>>n>>q;
	a.resize(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	//build(1,0,n-1);
	while(q--){
		ll l,r,x;
		cin>>l>>r>>x;
	ll mn=0;
		for(int i=l-1;i<r;i++){
			//cout<<a[i]<<"...";
			if(a[i]<a[x-1])			
				mn++;
		}
		//cout<<mn<<" ";
		if(mn==x-l)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	
}