    #include <bits/stdc++.h>
    int v[2100],w[2100];
    int dp[2000][3000];
    using namespace std;
    int kp(int W,int n){
    	if(n==-1||w==0)
    		return 0;
    	if(dp[n][W]!=-1)
    		return dp[n][W];
    	
    	if(W-w[n]<0){
    		return dp[n][W]=kp(W,n-1);
    	}
    	else{
    		return dp[n][W]=max(v[n]+kp(W-w[n],n-1),kp(W,n-1));
    	}
    }
    int main(){
    	int n,s;
    	cin>>s>>n;
    	memset(dp,-1,sizeof dp);
    	for(int i=0;i<n;i++){
    		cin>>w[i]>>v[i];
    	}
     
    	cout<<kp(s,n-1);
    } 