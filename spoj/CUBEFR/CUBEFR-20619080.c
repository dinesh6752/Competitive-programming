#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
unsigned long long i,j,k;
const int N=1000001;
int ans[N+5];
int nn=0;
void sieve(){

    fill(ans,ans+N,-1);
    ans[1]=ans[0]=1;
    for(i=2;i*i<=N;i++){
        if(ans[i]==-1){
            for(j=i*i;j<=N;j+=i){
                    if(ans[j]==-1||ans[j]==1){
                        if(j%(i*i*i)==0){
                        ans[j]=0;
                    }
                    else{
                        ans[j]=1;
                    }
                }
                
            }
        }
    }
        for(int i=1;i<N;i++){
            if(ans[i]==0)
                continue;
            else
                ans[i]=++nn;
        }
}


int main(){
        sieve();
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int tt;
        cin>>tt;
        int tc=1;
        nn=0;

        while(tt--){

            int n;
            cin>>n;
            if(ans[n]==0){
                cout<<"Case "<<tc++<<": Not Cube Free\n";
            }
            else{
                cout<<"Case "<<tc++<<": "<<ans[n]<<"\n";
            }
        }
}