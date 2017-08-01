#include <bits/stdc++.h>
using namespace std;
#define mx 1000003
int prime[mx];
typedef unsigned long long ull;
void segmentedSieve(vector<int> &isprime,ull l,ull r){
	ull i,j;
	for(i=2;i*i<=r;i++){
		for(j=max(i*i,((l-1+i)/i)*i);j<=r;j+=i){
			isprime[j-l]=1;
			
		}
	}
}
int main(){
	ull t,l,r;
	cin>>t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(t--){
		cin>>l>>r;
		std::vector<int> isprime(r-l+1);
		segmentedSieve(isprime,l,r);
		for(int i=0;i<(r-l)+1;i++){
			if(isprime[i]==0&&i+l!=1){
				cout<<i+l<<"\n";
			}
		}
	}
}
 
