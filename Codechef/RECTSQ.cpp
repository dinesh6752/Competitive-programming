#include<bits/stdc++.h>
using  namespace std;
int gcd(int a,int b)
{
	while(a>0&&b>0)
	{
		if(a>b)
		a%=b;
		else
		b%=a;
	}
	return a+b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,g;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		g=gcd(a,b)	;
		cout<<(a/g)*(b/g)<<"\n";
	}
} 
