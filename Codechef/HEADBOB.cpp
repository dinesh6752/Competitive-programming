#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,i,Y,I;
	string s;
	cin>>t;
	while(t--)
	{
	Y=I=0;
		cin>>n;
		cin>>s;
		for(i=0;i<n;i++)
		{
			if(s[i]=='Y')
			Y++;
			if(s[i]=='I')
			I++;
		}
		if(I>0)
		cout<<"INDIAN\n";
		else if(Y>0)
		cout<<"NOT INDIAN\n";
		else
		cout<<"NOT SURE\n";
	}
} 
