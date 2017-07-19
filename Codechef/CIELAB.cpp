#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	a=a-b;
	//<<a<<endl;
	if(a>0)
	{	if(a%10!=9)
		a++;
		else
		a--;
	}
	else
	{
		if(a%10!=-9)
		a--;
		else
		a++;
	}
	cout<<a;
	
} 
