#include <bits/stdc++.h>
using namespace std;


int main(){
	string s,t;
	while(cin>>s&&cin>>t){
		map<char,int> mp;
		for(char c:s){
			mp[c]++;
		}
		string ans;
		for(char c:t){
			if(mp[c]>0){
				ans+=c;
				mp[c]--;
			}
		}
		sort(ans.begin(),ans.end());
		cout<<ans<<"\n";
	}

}