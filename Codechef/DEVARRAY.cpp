#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<(n);i++)
int  main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,q,max,min,x;
	cin>>n>>q;
	max=-1;
	min=1000000001;
	rep(i,n)
	{
		cin>>x;
		if(x>max)
		max=x;
		if(x<min)
		min=x;
	}
	rep(i,q)
	{
		cin>>x;
		if(x<=max&&x>=min)
		cout<<"Yes\n";
		else
		cout<<"No\n";
	}
} 
