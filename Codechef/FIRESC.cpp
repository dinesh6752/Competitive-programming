#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
 
int c;
std::vector<int> a;
class Graph{
 
	int V;
	std::vector<std::vector<int> > adj;
public:
	Graph(int x);
	void add(int,int);
	void DFS();
	void DFSUtil(int,bool[]);
};
 
Graph::Graph(int x){
	V=x;
	adj.resize(V);
}
 
 
void Graph::add(int u,int v){
	v--;
	u--;
	adj[u].push_back(v);
	adj[v].push_back(u);
}
 
void Graph::DFS(){
	bool visited[V];
	memset(visited,false,sizeof(visited));
	for(int i=0;i<V;i++){
		if(visited[i]==false){
			DFSUtil(i,visited);
			a.push_back(c);
			c=0;
		}
	}
 
}
void Graph::DFSUtil(int u,bool visited[]){
	
		c++;
		visited[u]=true;
		for(int i=0;i<adj[u].size();i++){
			if(!visited[adj[u][i]]){
				DFSUtil(adj[u][i],visited);
				
			}	
		
		
	}
}
 
 
int main(){
	int V,E,u,v,n,t;
unsigned long	long ans=1;
	cin>>t;
	while(t--){
		c=0;
		a.clear();
		ans=1;
	    cin>>V>>E;
 
		Graph g(V);
	    n=V;
		while(E--){
			cin>>u>>v;
			g.add(u,v);
		}
		g.DFS();
		
	    
	    for(int i=0;i<a.size();i++){
	        
	      ans =((ans%MOD)*(a[i]%MOD))%MOD;
	    }
		cout<<a.size()<<" "<<ans<<endl;
	}	
} 
