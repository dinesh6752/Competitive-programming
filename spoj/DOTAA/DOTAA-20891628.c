#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,m,k,x=0;
		cin>>n>>m>>k;
		vector<int> a(n);
		//priority_queue<int,vector<int> ,greater<int> > q;

		for(int i=0;i<n;++i){
			cin>>a[i];
			//q.push(a[i]);
		}
		bool ok=1;
		for(int i=0;i<n;++i){
			
				x+=((a[i]-1)/k);
		//		cout<<(a[i]-1)/k<<" ";
		}
		//cout<<x<<"\n";
		cout<<((x>=m)?"YES\n":"NO\n");
	}
}