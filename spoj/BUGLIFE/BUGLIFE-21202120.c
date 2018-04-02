#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<int> >  g;
vector<int>  color;
int isNotBipartite=0;
ll c=0;
void dfs(int u,int p){
	color[u]=1-color[p];
	for(int x:g[u]){
			
		if(color[x]==-1){

			dfs(x,u);
		}
		else if(color[x]==color[u]){
			//cout<<x<<" "<<u<<"\n";
			isNotBipartite=1;
		}
	}
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	cin>>t;
	int tc=0;
	while(t--){
		isNotBipartite=0;
		int n,m;
		cin>>n>>m;
		color.resize(n+1);
		g.resize(n+1);
		for(int i=0;i<=n;++i){
			color[i]=-1;
		}
		color[0]=0;
		while(m--){
			ll x,y;
			cin>>x>>y;
			g[x].push_back(y);
			g[y].push_back(x);
		}
		c=0;
		for(int i=1;i<=n;i++){
			if(color[i]==-1){
				dfs(i,0);
			}
		}
		cout<<"Scenario #"<<++tc<<":\n";
		if(isNotBipartite)
			cout<<"Suspicious bugs found!\n";
		else
			cout<<"No suspicious bugs found!\n";
		g.clear();
		color.clear();
	}
}