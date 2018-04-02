#include<bits/stdc++.h>

using namespace std;


int n,len,i,q;
std::vector<int> a;
std::vector<vector<int> > b;


void preprocess(){
	
	for(i=0;i<n;i++){
		b[i/len].push_back(a[i]);
	}
	for(i=0;i<len;i++)
		sort(b[i].begin(), b[i].end());
}
int query(int l,int r,int k){
	int ans=0;

	int c_l=l/len,c_r=r/len;
	if(c_l==c_r){
		for(i=l;i<=r;i++){
			if(a[i]>=k)
			ans++;
		}
	}
	else{
		for(int i=l,end=(c_l+1)*len;i<end;i++){
			if(a[i]>=k)
				ans++;
		}
		for(int i=c_l+1;i<=c_r-1;i++){
			ans+=(b[i].end()-upper_bound(b[i].begin(),b[i].end(),k-1));
		}
		for(i=c_r*len;i<=r;i++){
			if(a[i]>=k)
				ans++;
		}
	}
	
	
	return ans;
}
void update(int idx,int val){
	int block=idx/len,k=0;
	a[idx]=val;
	for(int i=block*len,end=(block+1)*len;i<end&&i<n;i++)
		b[block][k++]=a[i];
	sort(b[block].begin(), b[block].end());
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	a.resize(n);
	len=sqrt(n)+1;
	b.resize(len);

	
	for(i=0;i<n;i++)
		cin>>a[i];
	preprocess();
	
	cin>>q;
	while(q--){
		int type;
		cin>>type;
		if(type==0){
			int l,r,k;
			cin>>l>>r>>k;
			l--;
			r--;
			cout<<query(l,r,k)<<"\n";
		}
		else{
			int idx,v;
			cin>>idx>>v;
			update(idx-1,v);
		}
	}
	

	
}