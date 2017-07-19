#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef  vector<unsigned long long > vull;
 
#define pb push_back
#define mp make_pair
#define X first
#define Y second
 
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define wh(t) while(t--)
#define all(x) (x).begin(),(x).end()
#define sz(a) a.size()
 
#define MOD 1000000007
#define endl "\n"
 
struct data{
	ull d,t,s;
 
};
bool compare(data a,data b){
	if(a.d<b.d)
		return true;
	
	else 
		return false;
}
bool pqcompare(data a,data b){
	if(a.s<b.s)
		return true;
	else if(a.s==b.s&&a.d==b.d&&a.t>b.t)
		return true;
	else 
		return false;
}
int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	ull t,n,d;
	cin>>t;
	wh(t){
	
		cin>>n>>d;
		std::vector<data> arr(n);
		priority_queue<data,std::vector<data>, decltype(&pqcompare)> pq(&pqcompare);
			ull tot=0;
		rep(i,n){
			data a;
			cin>>arr[i].d>>arr[i].t>>arr[i].s;
			tot+=(arr[i].s*arr[i].t);
			//pq.push(a);
 
		}
		sort(all(arr),compare);
		
		/*rep(i,n){
			cout<<arr[i].d<<" "<<arr[i].t<<" "<<arr[i].s<<endl;
		}*/
		
		ull curr=0,j=0;
	//	cout<<tot<<"mooo\n";
		Rep(i,1,d+1){
			/*if(pq.empty()){
				break;
			}*/
			//if(j<n){
 
				/*curr=arr[j].d;
				if(curr>i)
					i=curr;
				pq.push(arr[j]);
				j++;*/
				while(j<n&&arr[j].d==i){
					pq.push(arr[j]);
					j++;
				}
			//}
				if(!pq.empty())
				{
				data a=pq.top();
				pq.pop();
				tot-=a.s;	
			//	cout<<a.d<<"bbbb "<<a.t<<" "<<a.s<<endl;
			//	cout<<i<<" red"<<tot<<endl;			
				a.t--;
				if(a.t>0){
					pq.push(a);
					
				}
				}
			
 
		
		}
		cout<<tot<<endl;
		
	}
 
} 
