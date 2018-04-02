#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=500005;
std::vector<int> a;

int main(){
	//ios_base::sync_with_stdio(0);
	//cin.tie(0);
	a.push_back(0);
	unordered_map<ll,ll> mp;
	for(int i=1;i<N;i++){
		if(a[i-1]-i>0&&mp[a[i-1]-i]==0){
			mp[a[i-1]-i]++;
			a.push_back(a[i-1]-i);
		}
		else{
			mp[a[i-1]+i]++;
			a.push_back(a[i-1]+i);
		}
	}
	ll tt,x;

	
	while(1){
		cin>>x;
		if(x==-1)
			return 0;
		cout<<a[x]<<endl;

	}

}