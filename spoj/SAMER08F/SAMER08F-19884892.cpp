#include  <bits/stdc++.h>
using namespace std;

int main(){
	double n;
	while(1){
		cin>>n;
		if(n==0)
			return 0;
		cout<<(n*n*n/3)+(n*n/2)+(n/6)<<"\n";
	}
}