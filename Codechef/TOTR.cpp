#include <bits/stdc++.h>
using namespace std;
 
char c[26]={0};
void translate(string &s){
	for(int i=0;i<s.size();i++){
		if(s[i]=='_')
			s[i]=' ';
		else if(s[i]>='a'&&s[i]<='z')
			s[i]=c[s[i]-'a'];
		else if(s[i]>='A'&&s[i]<='Z'){
			//cout<<s[i]-' '<<endl;
			s[i]=c[s[i]+' '-'a']-' ';
		}
	}
}
int main(){
	int t,i;
	string s,x;
	cin>>t>>s;
	for(i=0;i<s.size();i++){
		c[i]=s[i];
	}
	while(t--){
		cin>>x;
		//cout<<x<<endl;
		translate(x);
		cout<<x<<endl;
	}
 
} 
