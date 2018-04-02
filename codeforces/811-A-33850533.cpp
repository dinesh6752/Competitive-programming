#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	 ll a,b;
	 cin>>a>>b;
	 ll n=sqrt(a);
	 if(b>=n*(n+1))
	 	cout<<"Vladik";
	 else
	 	cout<<"Valera";
}