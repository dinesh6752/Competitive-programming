#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,i,j;
	string s;
	cin>>t;
	while(t--)
	{
	 	int count[256]={0};
		cin>>n;
		cin>>s;
		for(i=0;i<s.size();i++)			
		{
			count[s[i]]++;
		}
		m=-1;
		for(i=0;i<s.size();i++)
		{
			if(count[s[i]]>m)
			m=count[s[i]];
		}
		cout<<s.size()-m<<"\n";		
	}
	
	
}	
	
		
	 
