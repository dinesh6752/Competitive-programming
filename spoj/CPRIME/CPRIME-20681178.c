#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5+1e8;
bitset<N> isPrime;
std::vector<int> p;
void sieve(){
	int i,j;
	isPrime.set();	
	isPrime[0]=isPrime[1]=0;
	p.push_back(2);
	int nsqrt=sqrt(N);
	for(i=3;i<=nsqrt;i+=2){
		if(isPrime[i]){
			for(j=i*i;j<N;j+=i){
				isPrime[j]=0;
			}
		}
	}
	for(i=3;i<=N;i+=2){
		if(isPrime[i]){
			
			p.push_back(i);
		}

	}
}
int pi(int x){
	return upper_bound(p.begin(),p.end(),x)-p.begin();
}
int  main(){
	sieve();
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while(1){
		double x;
		cin>>x;
		if(x==0)
			return 0;
		//cout<<pi(x)<<endl;
		//cout<<x<<" "<<isPrime[(int)x]<<" "<<log(x)<<" "<<x/log(x);
		cout<<fixed<<setprecision(1)<<abs((pi((int)x)-(x/log(x)))/pi(x)*100)<<"\n";
	}
}