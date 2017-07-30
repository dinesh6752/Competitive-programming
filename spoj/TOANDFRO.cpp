#include <bits/stdc++.h>
using namespace std;

int main(){
	long i,j,t,n,k;
	
	//cin>>t;
	while(1){
		cin>>n;
		if(n==0)
			return 0;
		string s;
		cin>>s;
		std::vector<std::vector<char> > ans;		
		long c=1;
		long u=1,d=1;
		for(i=1;i<=n;i++){
			//cout<<i<<endl;
			cout<<s[i-1];
			long curr=i;
			for(j=i,k=1;k<=s.size()/n-1;j++,k++){
				if(c&1){
					//cout<<curr+(2*n-u)<<"\n";
					cout<<s[curr+(2*n-u)-1];
					curr=curr+(2*n-u);
					
				}
				else{
					//cout<<curr+d<<"\n";
					cout<<s[curr+d-1];
					curr=curr+d;
					
				}

				c++;
			}
			u+=2;
			d+=2;

		}
		cout<<endl;
	}
		
}
	
