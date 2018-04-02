#include <bits/stdc++.h>
using namespace std;

int knapsack(std::vector<int> w,std::vector<int> v,int W){
    int n=w.size();
    int dp[n+1][W+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else{
                if(j-w[i-1]>=0){
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
    }
    //cout<<"\n";
    //cout<<n<<endl;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            //cout<<dp[i][j]<<" ";
        }
        //cout<<"\n";
    }
    return dp[n][W];
}

int main(){

    int W,n;
    cin>>W>>n;
    std::vector<int> w(n),v(n);
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }

    cout<<knapsack(w,v,W);
}