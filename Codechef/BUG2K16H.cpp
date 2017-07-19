#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		map<char,int> m;
		for(int i=0;i<s.size();i++){
			m[s[i]]++;
		}
		map<char,int>::iterator it;
		for(it=m.begin();it!=m.end();it++){
			cout<<it->first;
			if(it->second>1)
				cout<<it->second;
		}
		cout<<endl;
	}
} 
