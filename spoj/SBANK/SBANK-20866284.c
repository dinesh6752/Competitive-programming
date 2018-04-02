#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<pair<string,pair<string,string> >,int > mp;
		for(int i=0;i<n;++i){
			string a,b,c,w,x,y,z;
			cin>>a>>b;
			getline(cin,c);
			//cout<<c<<"\n";
			
			mp[{a,{b,c}}]++;

		}
		for(auto x:mp){
			cout<<x.first.first<<" "<<x.first.second.first<<" "<<x.first.second.second<<" "<<x.second<<"\n";
		}
	}
}