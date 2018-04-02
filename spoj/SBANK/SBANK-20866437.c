#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<string,int> mp;
		string s;
		
			getline(cin,s);
		for(int i=0;i<n;++i){

			getline(cin,s);
			mp[s]++;
		}
		for(auto x:mp){
			cout<<x.first<<" "<<x.second<<endl;
		}
	}
}