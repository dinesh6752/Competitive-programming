#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<vector<int> > g;
vector<int> visited;

int nc=0,hasCycle=0,ok=0;

void dfs(int u,int p){
	nc++;
	visited[u]=1;
	for(auto x:g[u]){
		if(!visited[x]){
			dfs(x,u);
		}
		else if(x!=p){
			hasCycle=1;
		}
	}
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int n,m;
	cin>>n>>m;
	g.resize(n+1);
	visited.resize(n+1);
	while(m--){
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	dfs(1,1);
	if(nc==n&&hasCycle==0)
		ok=1;
	puts(ok?"YES":"NO");
}