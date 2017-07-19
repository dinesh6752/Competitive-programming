#include <bits/stdc++.h>
#define MAX 100002
using namespace std;
 
int spf[MAX];
int c[MAX];
std::vector<std::vector<int> > dp(6,std::vector<int>(MAX) );
 
void  sieve(){
 
	long long i,j;
 
		for(i=2;i*i<=MAX;i++){
 
			if(spf[i]==0){
 
				for(j=i;i*j<=MAX;j++){
					if(spf[i*j]==0){
						spf[i*j]=i;
 
					}
				}
			}
		}
		for(i=2;i<=MAX;i++){
			if(spf[i]==0)
				spf[i]=i;
		}
}
int distinctFactor(int n){
	map<int,bool> m;
	int x=n;
	while(n!=1){
		m[spf[n]]=1;
		n=n/spf[n];
	}
	return m.size();
 
}
 
int query(int a,int b,int k){
	if(a>b)
		swap(a,b);
//	if(k==1&&a==2&&b!=a)
//		  return dp[k][b]-1;
	return (dp[k][b]-dp[k][a-1]);
}
 
void compute(){
	int i,j;
	for(i=2;i<=MAX;i++){
		c[i]=distinctFactor(i);
	}
	for(i=2;i<=MAX;i++){
		if(c[i]<=5)
		dp[c[i]][i]=1;
	}
	for(i=1;i<=5;i++){
		for(j=1;j<=MAX;j++){
			dp[i][j]+=dp[i][j-1];
		}
	}
	//dp[1][1]=1;
	/*for(i=1;i<=5;i++){
		for(j=1;j<=20;j++){
			cout<<dp[i][j]<<" ";
 
 
		}
		cout<<endl;
	}*/
}
int main(){
	int t,a,b,k;
	sieve();
	compute();
	cin>>t;
	/*for(int i=2;i<100;i++){
		//cout<<spf[i];
		cout<<i<<" "<<c[i]<<"\n";
	}*/
	while(t--){
		cin>>a>>b>>k;
		cout<<query(a,b,k)<<endl;
	}
}
 
