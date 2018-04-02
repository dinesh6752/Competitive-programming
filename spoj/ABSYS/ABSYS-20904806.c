#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool is_machula(string s){
	for(char ch:s){
		if(ch=='m')
			return 1;
	}
	return 0;
}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		string x,y,z,w1,w2;
		cin>>x>>w1>>y>>w2>>z;
		//cout<<x<<w1<<y<<w2<<z;
		if(is_machula(z)){
			//cout<<"case 1";
			cout<<x<<" + "<<y<<" = "<<stoi(x)+stoi(y)<<"\n";
		}
		else if(is_machula(x)){
			//cout<<"case 2";
			cout<<stoi(z)-stoi(y)<<" + "<<y<<" = "<<z<<"\n";
		}
		else{
			//cout<<"case 3";
			cout<<x<<" + "<<stoi(z)-stoi(x)<<" = "<<z<<"\n";	
		}
	}
}