#include <bits/stdc++.h>
using namespace std;

long long  subsetSum(std::vector<int> a,int s){
	int dp[a.size()+1][s+2];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<a.size()+1;i++)
		dp[i][0]=1;
	
	for(int i=1;i<=a.size();i++){
		for(int j=1;j<=s;j++){
			dp[i][j]=(j-a[i-1]>=0)?dp[i-1][j]||dp[i-1][j-a[i-1]]:dp[i-1][j];
		}
	}
		
	int ans=0;
	for(int j=0;j<=s;j++){
		if(dp[a.size()][j])
			ans+=j;
	}
	return ans;
}


int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){

		int n,s=0;
		cin>>n;
		std::vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
		}
		cout<<subsetSum(a,s)<<"\n";
	}
}