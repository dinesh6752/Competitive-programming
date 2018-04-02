#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int tt;
	cin>>tt;
	int c=0;
	while(tt--){
		int n,k;
		
		cin>>n>>k;
		std::vector<ll> a(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		ll mh=LLONG_MAX;
		sort(a.begin(), a.end());
		k--;
		for (int i = k; i < n; ++i)
		{
			mh=min(mh,a[i]-a[i-k]);
		}
		cout<<mh<<"\n";
	}

}