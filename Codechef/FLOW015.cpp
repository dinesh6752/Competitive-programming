#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define mp make_pair
 
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define repr(i,n) for(int i=(n-1);i>=0;i--)
#define tc(t) while(t--)
#define all(x) (x).begin(),(x).end()
 
#define MOD 1000000007 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int odd,year,t;
	cin>>t;
	tc(t){
		odd=0;
		cin>>year;
		year--;
		year%=400;
		odd=5*(year/100);
		year=year%100;
		odd+=2*(year/4)+(year-year/4);
		odd=(odd+1)%7;
		switch(odd){
			case 0: cout<<"sunday\n";	break;	
			case 1: cout<<"monday\n";	break;
			case 2:	cout<<"tuesday\n";	break;
			case 3: cout<<"wednesday\n";break;
			case 4: cout<<"thursday\n";	break;
			case 5: cout<<"friday\n";	break;
			case 6: cout<<"saturday\n";	break;
			}
 		
	}
} 
