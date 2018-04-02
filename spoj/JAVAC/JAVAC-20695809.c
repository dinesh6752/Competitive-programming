#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	while(cin>>s){
		bool isJava=0,isCPlusPlus=0,has_=0,hasUC=0,e=0;
		for(char c:s){
			if(c=='_')
				has_=1;
			if(c>='A'&&c<='Z'){
				hasUC=1;
			}
		}
		char pc='$';
		for(char c:s){
				if(pc=='_'&&c=='_'){
					e=1;
				}
				
				pc=c;
			}
		if((s[0]>='A'&&s[0]<='Z')||(hasUC&&has_)||s[0]=='_'||e||s[s.size()-1]=='_'){
			cout<<"Error!\n";
		}
		else if(hasUC){
			for(char c:s){
				if(isupper(c)){
					cout<<"_"<<(char)tolower(c);
				}
				else{
					cout<<c;
				}
			}
		}
		else if(has_){
			char pc='$';
			for(char c:s){
				if(pc=='_'){
					cout<<(char)toupper(c);
				}
				else if(c!='_'){
					cout<<c;
				}

				pc=c;
			}
		}
		else
		{
			cout<<s;
		}
		cout<<endl;
	}

}