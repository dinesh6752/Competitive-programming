#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned  long long ull;
int main(){
	ull n,t,s,x,exp;
	cin>>t;
	while(t--){
		exp=0;
		cin>>n>>s;
		while(n--){
			cin>>x;
			exp+=x;
		}
		if(2*exp<=s){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
} 
