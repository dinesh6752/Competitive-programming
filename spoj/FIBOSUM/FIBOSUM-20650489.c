#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
typedef long long ll;
vector<vector<ll> >  result;




void printMatrix(vector<vector<ll> > &a,ll r1,ll c1){
	for(ll i=0;i<r1;i++){
		for(ll j=0;j<c1;j++){
			//cout<<a[i][j]<<" ";
		}
		//cout<<"\n";
	}
	//cout<<"***********\n";
}
void readMatrix(vector<vector<ll> > &a,ll r1,ll c1){
	for(ll i=0;i<r1;i++){
		for(ll j=0;j<c1;j++){
			cin>>a[i][j];
		}
	}
}

std::vector<std::vector<ll> >  multiply(vector<vector<ll> >  &a,vector<vector<ll> > &b ,ll r1,ll c1,ll r2,ll c2){
	vector<vector<ll> > result(r1,std::vector<ll>(c2,0));
	for(ll i=0;i<r1;i++){
		for(ll j=0;j<c2;j++){
			for(ll k=0;k<r2;k++){
				result[i][j]=(result[i][j]%M)+((a[i][k]%M)*(b[k][j]%M))%M;
			}
		}
	}
	return result;

}


void power(vector<vector<ll> > &a,ll n){
	result.resize(2,std::vector<ll>(2));
	result[0][0]=result[1][1]=1;
	result[0][1]=result[1][0]=0;
	while(n>0){
		if(n&1){
			//cout<<n<<" up\n";
		result=multiply(result,a,2,2,2,2);
	}
	a=multiply(a,a,2,2,2,2);
	//cout<<n<<" down\n";
	printMatrix(a,2,2);
	printMatrix(result,2,2);
	n>>=1;
	
	}
	
}

ll fibo(ll n){
	//cout<<"processing.............."<<n<<endl;
	std::vector<vector<ll> > f(2,std::vector<ll>(1));
	std::vector<vector<ll> > T(2,std::vector<ll>(2));
	T[0][0]=T[0][1]=T[1][0]=1;
	T[1][1]=0;
	f[0][0]=1;f[1][0]=0;
	if(n==1){
		return 1;
	}
	power(T,n-1);

	result=multiply(result,f,2,2,2,1);
	//cout<<"%%%%%%";
	//cout<<"fibbo "<<n<<" "<<result[0][0]<<endl;
	return result[0][0]%M;
}
int main(){

	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>m>>n;
		cout<<(fibo(n+2)-fibo(m+1)+M)%M<<endl;
	}
}