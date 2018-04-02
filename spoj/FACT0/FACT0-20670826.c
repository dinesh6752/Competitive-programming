#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
void factorize(ll n){
	ll c=0;
	while(n%2==0){
		c++;
		n/=2;
	}
	if(c>0){
		cout<<"2^"<<c<<" ";
	}
	ll nsqrt=sqrt(n);
	for(ll i=3;i<=nsqrt;i+=2){
		c=0;
		while(n%i==0){
			c++;
			n/=i;
		}
		if(c>0){
			cout<<i<<"^"<<c<<" ";
		}
	}
	if(n>1)
		cout<<n<<"^1 ";
	cout<<endl;
}



int main(){
	ll n;
	while(1){
			cin>>n;
	if(n==0)
		return 0;
	factorize(n);
	}


}