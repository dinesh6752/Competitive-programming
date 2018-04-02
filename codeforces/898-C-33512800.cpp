#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool flag;
    class node{
    public:
    	node* child[10];
    	bool isLeaf;
    };
    node* getNode(){
    	node* temp=new node;
    	temp->isLeaf=false;
    	for(int i=0;i<10;i++){
    		temp->child[i]=NULL;
    	}
    	return temp;
    }
    void insert(node* root,string s){
    	node* trav=root;
    	int index;
    	for(int i=0;i<s.size();i++){
    		index=s[i]-'0';
    		if(trav->child[index]==NULL){
    			trav->child[index]=getNode();  
    		}
    		trav=trav->child[index];
    	
    	}
    	trav->isLeaf=true;
    }
     
    int search(node* root,string s){
     
    	node* trav=root;
    	int index,i;
    	flag=1;
    	for( i=0;i<s.size();i++){
    		index=s[i]-'0';
    		//cout<<"found"<<s[i]<<""<<i<<endl;
    		if(trav->child[index]==NULL){
    		//	cout<<"r"<<i<<endl;
    			return 0;
    		}
    		trav=trav->child[index];
    	}
    		assert (trav!=NULL&&trav->isLeaf);
    		//cout<<"checking...."<<s<<"\n";
    		for(int i=0;i<10;i++){
    			if(trav->child[i]!=NULL){
    				return 0;
    			}
    			//cout<<trav->child[i]<<" "<<i<<"\n";
    		
    	}
    	return 1;

    }
     

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	map<string,set<string> > mp;
	map<string,vector<string>  > ans;
	int t;
	cin>>t;
	while(t--){
		string s;
		int n;
		cin>>s>>n;
		for(int i=0;i<n;++i){
			string x;
			cin>>x;
			reverse(x.begin(), x.end());
			mp[s].insert(x);
		}

	}
	ll mps=mp.size();
	vector<node*>  root(mps);
	for(int i=0;i<mps;i++){
		root[i]=getNode();
	}
	int i=0;
	for(auto x:mp){

		for(auto y:x.second){
			insert(root[i],y);
		}
		i++;
	}
	i=0;
	for(auto x:mp){

		for(auto y:x.second){
			if(search(root[i],y)){
				ans[x.first].push_back(y);
				//cout<<x.first<<" "<<y<<"\n";
			}
		}
		i++;
	}
	cout<<ans.size()<<"\n";
	for(auto x:ans){
		cout<<x.first<<" "<<x.second.size()<<" ";
		for(auto y:x.second){
			reverse(y.begin(), y.end());
			cout<<y<<" ";
		}
		cout<<"\n";
	}

}