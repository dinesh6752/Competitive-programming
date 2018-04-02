#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	ll tt,x;
	cin>>tt;
	ll c=0;
	while(tt--){
		cin>>x;
		if(x==2)
			cout<<"1\n";
		else if(x&1){
			cout<<x/2<<"\n";
		}
		else
			cout<<((x/2)%2==0?x/2-1:x/2-2)<<"\n";


	}

}