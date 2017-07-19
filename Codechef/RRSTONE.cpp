#include<bits/stdc++.h>
using namespace std;
void modify(std::vector<long long > &a,long long max){
	for(int i=0;i<a.size();i++){
		a[i]=max-a[i];
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	long long max;
		cin>>n>>k;
		std::vector<long long> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(k!=0){
		if(k&1)
			k=1;
		else
			k=2;
	}
		while(k--){
			max=*max_element(a.begin(), a.end());
			modify(a,max);
			
			
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		
	
	return 0;
} 
