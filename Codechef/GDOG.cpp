#include<iostream>
using namespace std;
int main()
{
	int t,k,n,i,m,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		m=0;
		for(i=1;i<=k;i++)
		{
			if(n%i>m)
			{
				m=n%i;
				j=i;
			}
		}
		cout<<m<<"\n";
	}
	
} 
