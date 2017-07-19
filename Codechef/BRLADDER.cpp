#include<bits/stdc++.h>
using namespace std;
 
int main(){
	typedef long long ll;
	ll q,a,b;
	bool ans;
	cin>>q;
	while(q--){
		ans=false;
		cin>>a>>b;
		
		if((abs(a-b)==2)){
			//cout<<"h";
			if((a%2==0)&&(b%2==0))
				ans=true;
			else if((a%2!=0)&&(b%2!=0))
				ans=true;
		}
		else if((abs(a-b)==1)) {
 
			if(a>b)
				swap(a,b);
			if(a%2!=0&&a<b)
				ans=true;
 
		}
		puts(ans?"YES":"NO");
	}
} 
