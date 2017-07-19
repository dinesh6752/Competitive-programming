#include<bits/stdc++.h>
using namespace std;
bool subsetSum(vector<int>& a,int n,int sum){
	bool dp[n+1][sum+1];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=n;i++)
		dp[i][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(j>=a[i-1])
			{
				dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i-1]];
			}
			else
				dp[i][j]=dp[i-1][j];
		}
		if(dp[n][sum]==1)
			return 1;
	}
	return dp[n][sum];
}
int  main(){
	int t,n,m,i,j;
	bool flag;
	cin>>t;
	while(t--){
		cin>>n>>m;
		flag=0;
		std::vector<int> a(n);
		for(i=0;i<n;i++)
			cin>>a[i];
 
		cout<<(subsetSum(a,n,m)?"Yes":"No")<<'\n';
	}
} 
