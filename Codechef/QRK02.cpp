#include <bits/stdc++.h>
using namespace std;
 
unsigned long long k,mx;
vector<std::vector<unsigned long long> > adj;
std::vector<bool> v;
std::vector<unsigned long long> a;
 
void dfs(unsigned long long u){
	v[u]=true;
	k+=a[u];
	//cout<<u<<" ";
	for(unsigned long long i=0;i<adj[u].size();i++){
		if(!v[adj[u][i]]){
			dfs(adj[u][i]);
		}
	}
 
}
 
int main(){
	unsigned long long t,n,m,x,y;
	cin>>t;
	while(t--){
		cin>>n>>m;
		adj.resize(n);
		v.resize(n);
		a.resize(n);
		k=0;
		mx=0;
		
		
		while(m--){
			cin>>x>>y;
			adj[x-1].push_back(y-1);
			adj[y-1].push_back(x-1);
		}
		for(unsigned long long i=0;i<n;i++){
			cin>>a[i];
		}
		for(unsigned long long i=0;i<n;i++){
			//cout<<"ll"<<i<<endl;
			if(!v[i]){
				dfs(i);
			}
			//cout<<"\n";
			if(k>mx)
				mx=k;
			k=0;
		}
		cout<<mx<<endl;
		adj.clear();
		v.clear();
		a.clear();
	}
} 
