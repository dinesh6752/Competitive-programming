#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N=800;
std::vector<int> primes;
int isPrime[800+8];
void sieve(){
	ll i,j;
	fill(isPrime,isPrime+N,1);
	for(i=2;i*i<=N;i++){
		if(isPrime[i]){
			for(j=i*i;j<=N;j+=i){
				isPrime[j]=0;
			}
		}
	}
	for(i=2;i<=N;i++){
		if(isPrime[i])
			primes.push_back(i);
	}

}

ll sum=0;
void factorize(ll n){

	ll tmp=n;
	sum=1;
	//cout<<"*********************\n";
	for(ll k=0;primes[k]*primes[k]<=tmp;k++){
		ll c=0,cp;
		while(n%primes[k]==0){
			n/=primes[k];
			cp=primes[k];
			//cout<<primes[k]<<" ";
			c++;
		}
		if(c>0)
		sum=sum*(((pow(cp,c+1)-1)/(cp-1)));
	}
	if(n>1){
		sum=sum*(1+n);
	}
	//cout<<"&&&&&&&&&&&&&&7\n";
	//cout<<endl;
}

int main(){
	sieve();
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		factorize(n);
		cout<<sum-n<<endl;;
	}

}