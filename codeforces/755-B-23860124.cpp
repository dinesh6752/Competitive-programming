#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,common=0;
	string x;
	cin>>m>>n;
	set<string > s;
	for(int i=0;i<m+n;i++)
	{
		cin>>x;
		if(s.count(x)==0)
		s.insert(x);
		else
			common++;
	}
	if(m-(common/2)>n-((common+1)/2))
		cout<<"YES";
	else
		cout<<"NO";
}