#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int n;
	cin>>n;
	vector<int> a(n);

	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int g=a[0];
	for(int i=1;i<n;++i){
		g=__gcd(g,a[i]);
	}
	//cout<<__gcd(111111 ,233333);
	if(g!=a[0])
		cout<<"-1";
	else{
		cout<<2*n<<"\n";
		for(int i=0;i<n;++i){
			cout<<a[i]<<" "<<a[0]<<" ";
		}
	}
		

}