#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,c,m,n,x;
	vector<int> a;
	cin>>t;
	while(t--)
	{	
		cin>>n>>m;
		vector<int> a(n+1);
		for(i=1;i<=m;i++)
		{
			cin>>x;
			a[x]++;
		}
		c=1;
		for(i=1;i<=n;i++)
		{
			if(a[i]>0)	
			continue;
			if(c%2!=0)
			{
				cout<<i<<" ";
				
			}
			c++;
			
		}
		cout<<"\n";
		if(c==1)
		cout<<"\n";
		c=1;
		for(i=1;i<=n;i++)
		{
			if(a[i]>0)	
			continue;
			if(c%2==0)
			cout<<i<<" ";
			c++;
		}
		if(c<2)
		cout<<"\n";
		cout<<"\n";
	}
 
	
} 
