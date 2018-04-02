#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int n,k;
	while(1){
		cin>>n;
	if(n==0)
		break;
	vector<int> a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int e=1;
	stack<int> s;s.push(-1);
		for(int i=0;i<n;++i){
			if(e==a[i])
			{	//cout<<e<<"f ";
				e++;
			}
			else if(s.top()==e){
				while(!s.empty()&&s.top()==e){
					s.pop();
				//cout<<e<<"t ";
				e++;
				}
				
				s.push(a[i]);
			}
			else{
				s.push(a[i]);
			}
		}
		
			while(!s.empty()&&s.top()==e){
				s.pop();
				//cout<<e<<" ";
				e++;
			}
		
		//cout<<e<<" ";
		if(e==n+1){
			cout<<"yes\n";
		}
		else
			cout<<"no\n";
	
	}

	
}