#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(ll i=0;i<n;i++)
#define ll long long 

int  main(){
	ios_base::sync_with_stdio(0);
	int n,x,s=0,o=0;
	cin>>n;
	std::vector<int> a(n);
	rep(i,n){
		cin>>x;
		s+=x;
		if(s&1){
			o++;
		}
	}
	if((s&1)){
		cout<<"First";
	}
	else if(o>0){
		cout<<"First";
	}
	else{
		cout<<"Second";
	}
}