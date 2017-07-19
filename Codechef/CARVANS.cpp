#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t,r,n,i,x,c;
	cin>>t;
	while(t--){
		c=1;
		cin>>n;
		
		for(i=0;i<n;i++){
			cin>>x;
			if(i==0){
				r=x;
			} 
			else if(x<=r){
				c++;
				r=x;
				//cout<<x<<"ddx\n";
			}
 
		}
		cout<<c<<endl;
	}
} 
