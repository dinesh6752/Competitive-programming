#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


struct node{
	node *child[10];
	bool isLeaf;
};

node* getNode(){
	node *temp=new node;
	temp->isLeaf=0;
	for(int i=0;i<10;i++)
		temp->child[i]=0;
	return temp;
}
bool insert(node* root,string s){
	node* trav=root;
	for(int i=0;i<s.size();i++){
		int index=s[i]-'0';
		//cout<<"ins "<<s[i]<<"\n";
		if(trav->child[index]!=NULL&&trav->child[index]->isLeaf==true){
			//cout<<"broke "<<s[i]<<"\n";
			return 0;
		}
		//if(trav->child[index]!=NULL&&i==s.size()-1)
			//return 0;
		if(trav->child[index]==NULL){
			trav->child[index]=getNode();
		}
		trav=trav->child[index];
	}
	trav->isLeaf=true;
	return 1;

}
int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,ok=1;
		cin>>n;
		vector<string>  pn(n);
		for(int i=0;i<n;++i){
			cin>>pn[i];
		}
		node* root=getNode();
		sort(pn.begin(), pn.end());
		for(int i=0;i<n;++i){
		//	//cout<<pn[i]<<" ";
		}
		for(int i=0;i<n;++i){
			if(insert(root,pn[i])==0){
				////cout<<" "<<pn[i]<<" ";
				ok=0;
				break;
			}
			//cout<<"\n";
		}
		puts(ok?"YES":"NO");
	}
	
}