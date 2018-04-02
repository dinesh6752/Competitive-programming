#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int tt;
	cin>>tt;
	int c=0;
	while(tt--){
		string s,t;
		cin>>s;
		t=s;
	reverse(s.begin(), s.end());
		if(t==s){
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
	}

}