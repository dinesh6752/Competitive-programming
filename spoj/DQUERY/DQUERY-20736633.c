#include<bits/stdc++.h>
using namespace std;

struct query{
	int l,r,i;
};
int n,nq,i,block,ans,l,r;
std::vector<int> a,qa;
std::vector<query> q;
bool compare(query a,query b){
	if(a.l/block!=b.l/block)
		return a.l/block<b.l/block;
	else
	return a.r<b.r;
}
int cnt[1000005];
void add(int pos){
	cnt[a[pos]]++;
	if(cnt[a[pos]]==1)
		ans++;
}

void remove(int pos){
	
		cnt[a[pos]]--;
	if(cnt[a[pos]]==0)
		ans--;
}


void mo(){
	block=sqrt(n);
	sort(q.begin(), q.end(),compare);	
	int currL=0,currR=-1;
	for(i=0;i<nq;i++){

		l=q[i].l;
		r=q[i].r;
		
		while(currR<r){
			currR++;
			add(currR);
		}
		while(currR>r){
			remove(currR);
			currR--;
		}
		while(currL<l){
			remove(currL);
			currL++;
		}
		while(currL>l){
			currL--;
			add(currL);
		}
		qa[q[i].i]=ans;
		//cout<<l+1<<" "<<r+1<<" "<<ans<<"\n";
	}
}

int main(){

	cin>>n;
	a.resize(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>nq;
	q.resize(nq);
	qa.resize(nq);
	for(i=0;i<nq;i++){
		cin>>q[i].l>>q[i].r;
		q[i].i=i;
		q[i].l--;
		q[i].r--;
	}
	mo();
	for(i=0;i<nq;i++){
		cout<<qa[i]<<"\n";
	}
}