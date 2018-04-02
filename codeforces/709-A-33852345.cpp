#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	ll n,b,d;
	cin>>n>>b>>d;
	vector<int> a(n);
	ll s=0,c=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]<=b)
			s+=a[i];
		if(s>d){
			c++;
			s=0;
		}
	}
	cout<<c;
}