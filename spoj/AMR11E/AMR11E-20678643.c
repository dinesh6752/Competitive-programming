#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N=1e5;
std::vector<int> primes;
int isPrime[N+4];
void sieve(){
	ll i,j;
	fill(isPrime,isPrime+N,-1);
	for(i=2;i<=N;i++){
		if(isPrime[i]==-1){
			for(j=i*2;j<=N;j+=i){
				if(isPrime[j]==-1)
					isPrime[j]=1;
				else
				isPrime[j]++;
			}
		}
	}
	for(i=2;i<=N;i++){
		if(isPrime[i]>2){
			primes.push_back(i);
		}
	}
	//cout<<primes.size()<<endl;

}



int main(){
	sieve();
	int t;
	//cout<<isPrime[30]<<endl;
	cin>>t;
	while(t--){

		ll n;
		cin>>n;
		cout<<primes[n-1]<<endl;
	}

}