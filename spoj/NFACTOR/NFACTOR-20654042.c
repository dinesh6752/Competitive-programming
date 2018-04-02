#include <bits/stdc++.h>
using namespace std;

const int N=12+1e6;
int isPrime[N+2];
int ans[11][N+2];
void sieve(){
	fill(isPrime,isPrime+N,-1);
	isPrime[0]=isPrime[1]=0;
	long long i,j;
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
		if(isPrime[i]==-1){
			isPrime[i]=1;
		}
	}
	for(i=2;i<=N;i++){
		if(isPrime[i]<=10){
			
			ans[isPrime[i]][i]=1;

		}
	}
	for(i=1;i<=10;i++){
		for(j=2;j<=N;j++){
			ans[i][j]+=ans[i][j-1];
		}
	}


}



int main(){
	sieve();
	int t;
	cin>>t;
	while(t--){
		int a,b,n;
		cin>>a>>b>>n;
		if(n==0&&a==1)
			cout<<"1\n";
		else
		cout<<ans[n][b]-ans[n][a-1]<<endl;

	}


}