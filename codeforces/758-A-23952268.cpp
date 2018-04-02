#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,max;
	long c=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	max=*max_element(a.begin(),a.end());
	for(int i=0;i<n;i++){
		c+=max-a[i];
	}
	cout<<c;

}