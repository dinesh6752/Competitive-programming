#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,d,c=0;
	cin>>n>>d;
	std::vector<ll> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n-1;i++){
		if(a[i+1]-a[i]<=d){
			c++;
			//cout<<a[i]<<" "<<a[i+1]<<i<<" \n";
			i++;
			
		}
	}
	cout<<c;
 
} 
