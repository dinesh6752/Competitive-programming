#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	map<char,int> m;
	int  r,b,g,y,R,B,G,Y,tmp=s.size()%4;
	R=B=Y=G=0;
	for(int i=0;i<s.size();){
		r=b=g=y=1;
		for(int j=0;(j<4);j++){
			if(s[i]=='R')
				r--;
			if(s[i]=='B')
				b--;
			if(s[i]=='G')
				g--;
			if(s[i]=='Y')
				y--;
			i++;
		}
		//cout<<i<<endl;
		R+=r;
		G+=g;
		Y+=y;
		B+=b;
		//cout<<R<<" "<<B<<" "<<Y<<" "<<G<<"\n";
		if((i==s.size()-tmp)&&tmp)
		{
			r=b=y=g=1;
			for(int l=s.size()-tmp,z=0 ;z<4;z++,l++){
				//cout<<R<<"dddd "<<B<<" "<<Y<<" "<<G<<"\n";
				if(l<s.size()&&s[l]!='!'){
					//cout<<s[l];
				if(s[l]=='R'){
						r--; 
						continue;
					}
					if(s[l]=='B'){
						b--;
						continue;
					}
					if(s[l]=='G'){
						g--;
						continue;
					}
					if(s[l]=='Y'){
						y--;
						continue;
					} 
				}
					else 
					{
						for(int k=l-4;k>=0&&l>=s.size();k=k-4)
						{
							if(s[k]=='R'){
								r=0;
							break;
						}
						if(s[k]=='B'){
							b=0;
							break;
						}
						if(s[k]=='G'){
							g=0;
							break;
						}
						if(s[k]=='Y'){
							y=0;
							break;	
						}

						}		
					}
				
			}	
			R+=r;
			G+=g;
			Y+=y;
			B+=b;
			break;
		}
	}
	
	cout<<R<<" "<<B<<" "<<Y<<" "<<G;
}