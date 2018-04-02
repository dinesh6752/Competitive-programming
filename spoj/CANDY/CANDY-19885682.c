#include <bits/stdc++.h>
using namespace std;

int main(){
	long double n,x;
	while(1){
		long double  s=0,a=0;
		cin>>n;
		if(n==-1)
			return 0;
		std::vector<int> v;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
			s+=x;
		}
		a=s/n;
		if(s/n!=(int)(s/n)){
			cout<<"-1\n";
		}
		else{
			long c=0;
			sort(v.begin(),v.end());
			for(int i=0;i<n;i++){
				if(v[i]>=a){
					break;
				}
				else{
					c+=(a-v[i]);
				}
			}
			cout<<c<<endl;
		}
	}
}