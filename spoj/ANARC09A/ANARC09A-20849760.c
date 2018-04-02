#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=1e6+7;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int tc=1;
	while(1){
		string str;
		cin>>str;
		if(count(str.begin(),str.end(),'-')>0)
			break;
		stack<char> s;
		int ans=0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='{')
				s.push(str[i]);
			else if(str[i]=='}'&&!s.empty()&&s.top()=='{')
				s.pop();
			else {
				//cout<<"boo";
				ans++;
				s.push('{');
			}
		}
		//cout<<s.size();
		ans+=(s.size()/2);
		cout<<tc++<<". "<<ans<<"\n";
		//cout<<ans<<"\n";
	}
}