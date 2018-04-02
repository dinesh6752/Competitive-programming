#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(ll i=0;i<n;i++)
#define ll long long 

int  main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	bool ok=1;
	map<char,int> m;

	rep(i,s.size()){
		m[s[i]]++;
		if(m[s[i]]>k)
			ok=0;
	}
	cout<<(ok?"YES":"NO");

}