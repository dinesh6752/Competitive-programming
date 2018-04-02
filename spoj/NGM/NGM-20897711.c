#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	ll n;

	cin>>n;
	if(n%10==0){
		cout<<"2";
	}
	else{
		cout<<"1\n"<<n%10;
	}
}