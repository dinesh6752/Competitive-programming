#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

const  long long N=32000;
int isPrime[N+3];
vector< int> prime;
#define MOD 1000000007
#define sz 32000
//vector<int> prime;
bool p[sz];
void sieve(){


    ll i,j,c=0;
    prime.clear();
    memset(p,true,sizeof(p));
    for(i=2;i<=sz;i++){
          if(p[i]==true){

    prime.push_back(i);

        for(j=i*i;j<sz;j+=i){
            p[j]=0;
        }
    }
    }
}


 long long nof;

int main(){
    ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    sieve();
	ll a,b,nd;
	cin>>a>>b>>nd;
	ll cnt=0;
	//scout<<prime[prime.size()-1];
	for(int i=a;i<=b;i++){
            int n=i;
		 long long c=0;
	 int temp=n;
	nof=1;
	for(int k=0;prime[k]*prime[k]<=temp;k++){ //***
		c=0;
		 while(n!=1&&n%prime[k]==0){
			n/=prime[k];
			c++;
		}
		nof*=(1+c);
	}
	if(n!=1){
		nof*=(1+1);
	}
		if(nof==nd){
			cnt++;
		}
	}
	cout<<cnt;
}
