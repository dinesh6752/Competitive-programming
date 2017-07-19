//Ruler of investment
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
	int t,i;
	char s[1000];
	cin>>t;
	i=1;
	while(t--)
	{
		cin>>s;
		switch(s[strlen(s)-1])
		{
			case 'y':
			printf("Case #%d: %s is ruled by nobody.\n",i,s);
			break;
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			printf("Case #%d: %s is ruled by a queen.\n",i,s);
			break;
			default:
			printf("Case #%d: %s is ruled by a king.\n",i,s);
			
		}
		i++;
	}
}
	
 
 
