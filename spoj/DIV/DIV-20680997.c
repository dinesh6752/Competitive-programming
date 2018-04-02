#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5+1e4;
bool isPrime[N+2];
std::vector<int> p;
std::vector<int> d;
void sieve(){
	ll i,j;
	fill(isPrime,isPrime+N,1);
	isPrime[0]=isPrime[1]=0;
	p.push_back(2);
	for(i=3;i<=N;i+=2){
		if(isPrime[i]){
			p.push_back(i);
			for(j=i*i;j<=N;j+=i){
				isPrime[j]=0;
			}
		}
	}
}
int factorize(int n){
	int temp=n,nof=1;
	int pc=0;
	//cout<<n<<" ";
	for(int k=0;p[k]*p[k]*1LL<=temp;k++){
		int c=0;
		while(n%p[k]==0){
			n/=p[k];
			c++;
			//cout<<p[k]<<" ";
		}
		nof*=(1+c);
	}
	if(n>1){
		nof*=(2);
		//cout<<n<<" ";
	}
	//cout<<endl;
	return nof;
}
bool check(int n){

	int temp=n,nof=1;
	int pc=0,dp=0;
	for(int k=0;p[k]*p[k]*1LL<=temp;k++){
		int c=0;
		if(n%p[k]==0){
			dp++;
			while(n%p[k]==0){
			n/=p[k];
			c++;
			pc++;
		}
		}
		
		
	}
	if(n>1){
		pc++;
		dp++;
	}
	return (pc==2&&dp==2)?1:0;
	
}
int done[1000];

int  main(){
	sieve();
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n=1e6;	
	for(int i=2;i<=n;i++){
		int k=factorize(i);
		if(done[k]){
				if(done[k]==1){
				d.push_back(i);
			}
		}
		else{
			bool ans=check(k);
			if(ans){
				d.push_back(i);
				done[k]=1;
			}
			else
				done[k]=-1;
		}
	}
	for(int i=8;i<d.size();i+=9){
		cout<<d[i]<<"\n";
	}
	
}