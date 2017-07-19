#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
int main(){
	int t,c,k,n,q,l,r;
	cin>>t;
	while(t--){
		cin>>n>>c>>q;
		while(q--){
			cin>>l>>r;
			if(l<=c&&r>=c){
				c=r-(c-l);
			}
			//cout<<c<<endl;
		}
		cout<<c<<endl;
	}
}
 
