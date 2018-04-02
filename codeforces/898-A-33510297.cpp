#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	ll n;
	cin>>n;
	ll r=n%10;
	if(r==0)
		cout<<n;
	else if(r<=5){
		n/=10;
		cout<<n*10;
	}
	else{
		cout<<((n+10)/10)*10;
	}
	
}