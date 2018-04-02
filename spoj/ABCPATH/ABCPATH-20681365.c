#include <bits/stdc++.h>
using namespace std;
char a[109][109];
int v[109][109];
int row,col;
int mx,curr;
int dr[]={-1,-1,-1,0,0,1,1,1};
int dc[]={-1,0,1,-1,1,-1,0,1};
bool isSafe(int r,int c,char p){
	return (r>=0&&r<=row-1&&c>=0&&c<=col-1&&a[r][c]==p+1&&v[r][c]==0);
}
 
 
void dfs(int x,int y){
	curr++;
	mx=max(mx,curr);
	v[x][y]=1;
//	cout<<a[x][y]<<" "<<curr<<endl;
	for(int i=0;i<8;i++){
		int r,c;
		r=x+dr[i],c=y+dc[i];
		if(isSafe(r,c,a[x][y])){
			dfs(r,c);
			curr--;
			//v[r][c]=0;
			
		}
	}
	
}
int main(){
	   
     
	int t=1;
	while(1){
		curr=0,mx=0;
	for(int i=0;i<row;i++)	{
		for(int j=0;j<col;j++){
			v[i][j]=0;
		}
	
		
	}	
		cin>>row>>col;
		if(row==0&&col==0)
			break;
	for(int i=0;i<row;i++){
		scanf("%s",&a[i]);
	}
	for(int i=0;i<row;i++)	{
		for(int j=0;j<col;j++){
			if(a[i][j]=='A'){
			curr=0;
			//	cout<<a[i][j]<<" start\n";;
				dfs(i,j);
				
			//	cout<<"end";
			}
				
				
				
		}
	}
	
	printf("Case %d: %d\n",t++,mx);
	//cout<<"Case "<<t++<<": "<<mx<<endl;
 
	}
	
} 