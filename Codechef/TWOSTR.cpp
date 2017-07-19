#include<iostream>
using namespace std;
int main()
{
	int t,i,j;
	string x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(x.size()!=y.size())
		{
			cout<<"No\n";
			continue;
		}
		else
		{
			i=0,j=0;
			while(x[i]) 
			{
				if(x[i]!=y[i]&&x[i]!='?'&&y[i]!='?')
				{
					j=1;
					break;
				}
				i++;
			}
			if(j==0)
				cout<<"Yes\n";
			else
				cout<<"No\n";	
		}
		
		
	}
 
}	
        
 
