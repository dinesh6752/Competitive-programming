#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll i,j,k;
const int N=10000;
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
map<int,int> mp;

void factorize(int n){
    int temp=n,k;
    for(k=0;prime[k]*prime[k]<=temp;k++){
        while(n%prime[k]==0){
            n/=prime[k];
            mp[prime[k]]++;
        }
    }
    if(n!=1){
        mp[n]++;
    }

}
int main(){

    int n;
    sieve();

    cin>>n;
    for(int i=2;i<=n;i++){
        factorize(i);
    }


    map<int ,int>::iterator it;
    int c=0;
    for(it=mp.begin();it!=mp.end();it++){
        if(c!=0){
            cout<<" * ";
        }
        c++;
        cout<<it->first<<"^"<<it->second;
    }
}