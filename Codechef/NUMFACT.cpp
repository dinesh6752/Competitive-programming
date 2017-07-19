#include <bits/stdc++.h>
#define sz 1000004
using namespace std;
 
typedef unsigned long long ull;
ull spf[sz];
 
void sieve(){
 
	ull i,j;
	for(i=2;i<sz;i++){
 
		if(spf[i]==0){
 
			for(j=i;j*i<sz;j++){
 
				if(spf[i*j]==0){
					spf[i*j]=i;
				}
			}
		}
	}
 
	for(i=2;i<sz;i++){
		if(spf[i]==0)
			spf[i]=i;
	}
}
int main(){
	sieve();
	ull t,n,x,i,j,c;
	cin>>t;
	while(t--){
 
		c=1;
		ull count[sz]={0};
		cin>>n;
		std::vector<ull> a(n);
		for(i=0;i<n;i++){
			cin>>x;
			while(x!=1){
				
				count[spf[x]]++;
				x/=spf[x];
			}
		}
		for(i=2;i<sz;i++){
			if(count[i]>=1){
				c*=(count[i]+1);
			}
		}
		cout<<c<<endl;
		//cout<<"y"<<t<<endl;
 
	}
} 
