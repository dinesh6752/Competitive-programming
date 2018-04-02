#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e6+7;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<(3*(n*(n+1)/2)-n)%mod<<"\n";
	}
}