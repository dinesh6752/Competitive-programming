#include <bits/stdc++.h>
using namespace std;

int main(){
	double x,y,z;
	while(1){
		cin>>x>>y>>z;
		if(x==0&&y==0&&z==0)
			return 0;
		if(y-x==z-y){
			cout<<"AP "<<z+(z-y)<<endl;
		}
		else{
			cout<<"GP "<<z*(z/y)<<endl;;
		}

	}
	
}