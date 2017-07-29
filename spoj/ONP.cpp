#include <bits/stdc++.h>
using namespace std;


void rev(string s){
	int i,j;
	stack<char>  st;
	for(i=0;i<s.size();i++){
		if(s[i]=='(')
			st.push('(');
		else if(s[i]==')'){
			while(st.top()!='('){
				cout<<st.top();
				st.pop();
			}
			st.pop();
		}
		else if(isalpha(s[i])){
			cout<<s[i];
		}
		else{
			st.push(s[i]);
		}
	}
}

int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		rev(s);
		cout<<endl;
	}
}