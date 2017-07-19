#include <bits/stdc++.h>
using namespace std;
 
 int dp[100008];
 int a[]={1,2,3,5,10,20,50,100};
 
 int minCoinExchange(){
 
 	memset(dp,999999,sizeof(dp));
 	dp[0]=0;
 	for(int i=0;i<8;i++){
 
 		for(int j=0;j<=100005;j++){
 
 			if(j-a[i]>=0){
 				dp[j]=min(dp[j-a[i]]+1,dp[j]);
 			}
 		}
 
 	}
 
 }
 
 int main(){
 
 	minCoinExchange();
 	/*for(int i=0;i<=100;i++)
 		cout<<dp[i]<<" ";*/
 	int t,n,x,c;
 	cin>>t;
 	while(t--){
 		c=0;
 		cin>>n;
 		while(n--){
 			cin>>x;
 			c+=dp[x];
 		}
 		cout<<c<<endl;
 	}
 
 
 } 
