#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,c,i,x,n;
	cin>>t;
	while(t--)
	{
	int a[101]={0};
	c=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(a[x%101]!=0)
			c++;
			else
			a[x%101]=1;
		}
		cout<<n-c<<"\n";
	}
}
