#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
 
int main(){
	ull t,a;
	string b;
	cin>>t;
	while(t--){
		ull mod=0;
		cin>>a>>b;
		if(a==0)
			cout<<b<<endl;
		else if(b=="0")
			cout<<a<<endl;
		else{
				for(int i=0;i<b.size();i++){
				mod=(mod*10+b[i]-'0')%a;
			   }
			   
		cout<<__gcd(a,mod)<<endl;
		}
		
	}
 
 
} 
