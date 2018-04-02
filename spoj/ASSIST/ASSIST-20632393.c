#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
 
 
const  long long N=33809+100;
int ans[N+3];
vector< int> prime;
 
void sieve(){
 
     long long i,j;
    for(i=0;i<=N;i++){
        ans[i]=1;
    }
    ans[0]=ans[1]=0;
    for(i=2;i<=N;i++){
        if(ans[i]==1){
            //prime.push_back(i);
            int ck=0;
            for(j=i+1;j<=N;j++){
                if(ans[j]!=0)
                    ck++;
                if(ck%i==0&&ck!=0&&ans[j]!=0){
                ans[j]=0;       
                //cout<<i<<" "<<j<<" "<<ck<<endl;
                }
 
            }
 
        }
    }
    for(i=2;i<=N;i++){
        if(ans[i]==1)
            prime.push_back(i);
    }
}
 
int main(){
    sieve();
    while(1){
        int n;
        cin>>n;
        //sort(prime.begin(),prime.end());
        if(n==0)
            break;
         // cout<<prime.size()<<endl;
    cout<<prime[n-1]<<endl;
    }
} 