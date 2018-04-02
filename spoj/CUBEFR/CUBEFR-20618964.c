#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll i,j,k;
const int N=1200;
int isPrime[N+5];
std::vector<int> prime;
void sieve(){

    fill(isPrime,isPrime+N,1);
    isPrime[1]=isPrime[0]=0;
    for(i=2;i*i<=N;i++){
        if(isPrime[i]){
            for(j=i*i;j<=N;j+=i){
                isPrime[j]=0;
            }
        }
    }
    for(i=0;i<=N;i++){
        if(isPrime[i]){
            prime.push_back(i);
        }
    }
    //cout<<prime.size();

}
int nn=0;
int ans[1000004]={0};
bool ok;
void factorize(int n){
    int temp=n,k;
     ok=1;

    for(k=0;prime[k]*prime[k]<=temp;k++){
        int c=0;
        while(n%prime[k]==0){
            n/=prime[k];
            c++;
            if(c>2){
                ok=0;
                //nn++;
                break;
            }
        }
    }
    n=temp;
    if(ok){ //cube free
        ans[temp]=++nn;
    }
    
}
int main(){
        sieve();
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int tt;
        cin>>tt;
        int tc=1;
        for(int i=1;i<1000002;i++){
            factorize(i);
        }
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