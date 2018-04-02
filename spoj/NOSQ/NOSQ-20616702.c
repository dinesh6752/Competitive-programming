#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll i,j,k;
const int N=1000;
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

int ans[10][100004]={0};
bool ok;
void factorize(int n){
    int temp=n,k;
     ok=1;

    for(k=0;prime[k]*prime[k]<=temp;k++){
        int c=0;
        while(n%prime[k]==0){
            n/=prime[k];
            c++;
            if(c>1){
                ok=0;
                break;
            }
        }
    }
    n=temp;
    if(ok){
        while(n>0){
            ans[n%10][temp]=1;
            n/=10;
        }
    }
   
}
int main(){

    int n,t,a,b,d;
    sieve();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>t;
    for(i=1;i<=100003;i++){
        factorize(i);
    }
    for(i=0;i<=9;i++){

        for(j=1;j<=100002;j++){
            ans[i][j]+=ans[i][j-1];
        }
    }
    while(t--){
        cin>>a>>b>>d;
            
        cout<<ans[d][b]-ans[d][a-1]<<"\n";
    }
}