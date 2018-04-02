#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<vector<int> > a(n,vector<int>(m));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int mx=-122;
		vector<vector<int> > dp=a;
		for(int i=0;i<m;i++){
			mx=max(mx,dp[0][i]);
		//	cout<<"\n";
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<m;j++){
				int x,y;
				x=y=-100;;
				if(j-1>=0)
					x=dp[i-1][j-1];
				if(j+1<m)
					y=dp[i-1][j+1];
				dp[i][j]+=max({x,y,dp[i-1][j]});
				//mx=max(mx,dp[i][j]);
			}
		}
		for(int i=0;i<m;i++){
			mx=max(mx,dp[n-1][i]);
		//	cout<<"\n";
		}
		/*for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<dp[i][j]<<" ";
			}
			cout<<"\n";
		}*/
		cout<<mx<<"\n";
	}
	
}