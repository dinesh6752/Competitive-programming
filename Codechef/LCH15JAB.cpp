#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int t,i,max,c,j;
	cin>>t;
	while(t--)
	{
	
		cin>>s;
		int a[100]={0};
		max=0;
		for(i=0;i<s.size();i++)
		{
		c=0;
		
			for(j=0;j<s.size();j++)
			{
			
				if(s[i]==s[j])
				c++;
			}
			if(c>max)
			max=c;
			
		}
		if(max==(s.size()-max))
		cout<<"YES\n";
		else
		cout<<"NO\n";
		
	}
 
		
} 
