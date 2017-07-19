#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
	long long n,t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		long long c1=0,c2=0,i=1,s1=0,s2=0;
		while(a>c1||b>c2){
			if(i&1){
				
				c1+=i;
				if(a>=s1+i)
					s1+=i;
				
			}
			else{
				
				c2+=i;
				if(b>=s2+i){
					s2+=i;
				}
				
			}
			i++;
		}
		puts(s1>s2?"Limak":"Bob");
		
}
 
 
} 
