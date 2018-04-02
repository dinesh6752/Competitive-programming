#include <bits/stdc++.h>
using namespace std;

struct k{
    int w;
    int v;
}; 
long long  tot;


bool cmp(k a,k b){
return a.w<b.w;

}
int knapsack(std::vector<k>& a ,int W){
    tot=INT_MAX;
    int n=a.size();
    int dp[n+1][W+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else{
                if(j-a[i-1].w>=0){
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i-1].w]+a[i-1].v);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
    }
    
   /* cout<<"\n";
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }*/
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(dp[i][j]==dp[n][W]){
                tot=min((long long)j,tot);
            }
        }
    }
    
    return dp[n][W];
}

int main(){

    int W,n;
    while(1){
       
        cin>>W>>n;
        if(W==0&&n==0)
            return 0;
         std::vector<k> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].w>>a[i].v;
        }
         //sort(a.begin(),a.end(),cmp);
        cout<<tot<<" "<<knapsack(a,W)<<endl;
    }
    
}