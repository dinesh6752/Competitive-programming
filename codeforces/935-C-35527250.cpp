#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	double R,x1,x2,y1,y2,x3,y3,d,r;
	cin>>R>>x1>>y1>>x2>>y2;
	d= sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0));
	r=(d+R)/2;
	if(d>R){
		cout<<fixed<<setprecision(10)<<x1<<" "<<y1<<" "<<R;	
		return 0;
	}
	if(d==0){
		cout<<fixed<<setprecision(10)<<x1+R/2<<" "<<y1<<" "<<R/2;	
		return 0;
	}
	x3=x1+(x1-x2)/d*(R-r);
	y3=y1+(y1-y2)/d*(R-r);
	cout<<fixed<<setprecision(10)<<x3<<" "<<y3<<" "<<r;
}