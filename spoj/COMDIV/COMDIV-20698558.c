#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const  long long N=3+1e6;
int isPrime[N+3];
vector< int> prime;

void sieve(){
	 long long i,j;
	for(i=0;i<=N;i++){
        isPrime[i]=1;
	}
	isPrime[0]=isPrime[1]=0;
	for(i=2;i*i<=N;i++){
		if(isPrime[i]==1){
			for(j=i*i;j<=N;j+=i){
				isPrime[j]=0;
			}
		}
	}
	for(i=2;i<=N;i++){
        if(isPrime[i]==1)
            prime.push_back(i);
	}
}



unsigned long long nof;
void factorize(int n){
	long long c=0;
	int temp=n;
	nof=1;
	for(int k=0;prime[k]*prime[k]<=temp&&k<prime.size();k++){ //***
		c=0;
		while(n%prime[k]==0){
			n/=prime[k];
			c++;
		}
		nof*=(1+c);
	}
	if(n!=1){
		nof*=(1+1);
	}
}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	sieve();
	int tt;
	cin>>tt;
	int c=0;
	while(tt--){
		int a,b;
		cin>>a>>b;
		factorize(__gcd(a,b));
		cout<<nof<<"\n";

	}

}