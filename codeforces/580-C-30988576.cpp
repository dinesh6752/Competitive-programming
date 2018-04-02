#include <bits/stdc++.h>
using namespace std;
std::vector<int> c;
std::vector<int> v;
std::vector<std::vector<int> > g;
int curr=0,m,ans;
void dfs(int u,int curr){
		v[u]=1;
		
		
		if(c[u]){
			curr++;
		}
		else
			curr=0;
		//	cout<<u<<" "<<curr<<" "<<c[u]<<" "<<m<<endl;
		if(curr>m){
			return;
		}
				
		if(g[u].size()==1&&u!=1){
			//cout<<"exe"<<u;
			ans++;
		}
		for(auto x:g[u]){
			if(!v[x]){
				dfs(x,curr);
			}
		}
}
int main(){
	int n;
	cin>>n>>m;
		c.resize(n+1);
		g.resize(n+1);
		v.resize(n+1);
		for(int i=1;i<=n;i++)
			cin>>c[i];
			

		for(int i=0;i<n-1;i++){
			int x,y;
			cin>>x>>y;
			g[x].push_back(y);
			g[y].push_back(x);
		}
		
		dfs(1,0);
		cout<<ans;

}