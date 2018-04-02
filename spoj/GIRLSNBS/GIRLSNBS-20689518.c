#include <bits/stdc++.h>
using namespace std;


int main(){

	float a,b;
	while(1){
		cin>>a>>b;
		if(a==-1&&b==-1)
			return 0;
		if(a==0||b==0)
			cout<<max(a,b)<<endl;
		else
		cout<<ceil(max(a,b)/(min(a,b)+1))<<endl;;
	}

}