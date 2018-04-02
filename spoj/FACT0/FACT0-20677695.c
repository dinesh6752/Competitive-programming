#include<bits/stdc++.h>
using namespace std;
typedef  unsigned long long  ll;



const  ll N=31629400;
bool isPrime[N];
ll prime[20000000];
ll pid=0;
void sieve(){
	ll i,j;
	//isPrime.set();
	ll nsqrt=sqrt(N);
	fill(isPrime,isPrime+N,1);
	for(i=3;i<nsqrt;i+=2){
		if(isPrime[i]){
			
			for(ll j=i*i;j<N;j+=i){
				isPrime[j]=0;
			}
		}
	}
	prime[pid++]=2;
	for(ll i=3;i<N;i+=2){
		if(isPrime[i])
			prime[pid++]=i;
	}
	//cout<<prime[pid-1]<<endl<<pid;
	//for(ll i=0;i<100;i++)
		//cout<<prime[i]<<endl;
}

void factorize(ll n){
	ll c=0;
	
	ll temp=n;
	//nof=1;
	for(ll k=0;prime[k]*prime[k]<=temp&&k<pid;k++){ //***
		c=0;
		while(n%prime[k]==0){
			n/=prime[k];
			c++;
		}
		if(c>0){
			cout<<prime[k]<<"^"<<c<<" ";
		}
	}
	if(n>1)
		cout<<n<<"^1 ";
	cout<<"\n";
}
int main(){
	sieve();
	ll n;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//return 0;
	while(1){
		cin>>n;
		//cout<<n<<endl;
		if(n==0)
			return 0;
		else
		factorize(n);
	}
}
