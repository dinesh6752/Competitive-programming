#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	long a[5001],min;
	cin>>t;
	while(t--)
	{
		min=99999999999;
		cin>>n;
		for(i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(i=1;i<n;i++)
		{
			if(a[i]-a[i-1]<min)
			min=a[i]-a[i-1];
		}
		cout<<min<<"\n";
	}
	
} 
