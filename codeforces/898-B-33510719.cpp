#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	ll n,a,b;
	cin>>n>>a>>b;
	ll i=0,j=n;
	ll a1,a2,ok=0;
	while(i<=j){

		if(i%a==0&&j%b==0){
			a1=i/a;
			ok=1;
			a2=j/b;
		}
		else if(i%b==0&&j%a==0){
			a1=j/a;
			a2=i/b;
			ok=1;
		}
		i++;
		j--;
	}
if(ok){
	cout<<"YES\n";
	cout<<a1<<" "<<a2;

}
else{
	cout<<"NO\n";
}
}