#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int n,k;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a.begin(), a.end());
	int g=0;
	for(int i=1;i<n;++i){
		g=__gcd(g,a[i]-a[i-1]);
	}
	int ans=0;
	//cout<<g<<"\n";
	for(int i=1;i<n;++i){
		ans+=(a[i]-a[i-1]-1)/g;
	}
	cout<<ans;
	
}