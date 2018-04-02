#include <bits/stdc++.h>
using namespace std;

const  long long N=1e7;
int spf[N+3];
long long f[N+3];
void sieve(){
	 long long i,j;
	for(i=0;i<=N;i++){
        spf[i]=1;
	}
	spf[0]=spf[1]=0;
	for(i=2;i*i<=N;i++){
		if(spf[i]==1){
			for(j=i*i;j<=N;j+=i){
				if(spf[j]==1)
					spf[j]=i;
			}
		}
	}
	for(i=2;i<=N;i++){
        	if(spf[i]==1)
        		spf[i]=i;
	}
	for(i=2;i<=N;i++){
	       f[i]=f[i-1]+spf[i];
	}
	
}


int main(){
	sieve();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<f[n]<<endl;
	}
}