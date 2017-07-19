#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t,n,k,i,x;
	
	cin>>t;
	while(t--)
	{
		vector<long> a;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
			
		}
		cin>>k;
		x=a[k-1];
		sort(a.begin(),a.end());
		for(i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				cout<<i+1<<"\n";
				break;
			}	
		}
		
		}
		
}
 
 
