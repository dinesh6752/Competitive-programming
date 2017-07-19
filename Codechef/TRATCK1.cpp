#include <bits/stdc++.h>
using namespace std;
 
unsigned long long k,mx,n;
int adj[2000][2000];
bool v[2000];
//std::vector<unsigned long long> a;
 
void dfs(unsigned long long u){
	v[u]=true;
	//k+=a[u];
	//cout<<u<<" ";
	for(unsigned long long i=1;i<n;i++){
		if(!v[i]&&adj[u][i]){
			dfs(i);
		}
	}
 
}
 
int main(){
	unsigned long long t,m,x,y;
	cin>>t;
	while(t--){
		cin>>n>>m;
		
			for(int i=1;i<=1008;i++)
		{
			for(int j=1;j<=1008;j++)
			adj[i][j]=0;
		}
		memset(v,false,sizeof(v));
		k=0;
		
		
		while(m--){
			cin>>x>>y;
			adj[x][y]=1;
			adj[y][x]=1;
		}
		
		
		if(n==0)
			cout<<"0\n";
		else if(m==0)
			cout<<n-1<<endl;
		else{
			for(unsigned long long i=1;i<=n;i++){
		
			if(!v[i]){
				dfs(i);
				k++;
				//cout<<endl;
			}
		}
	cout<<k-1<<endl;
		}
		
		
 
	}
} 
