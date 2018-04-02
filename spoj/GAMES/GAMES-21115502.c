//
// Created by Administrator on 2/5/2018.
//

#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string num;
        int c=0,p=0;
        for(auto x:s){
        	 if(p)
        c++;
        if(x!='.')
        num+=x;
        else
        p=1;
       
        }
        //cout<<(num);
        cout<<powl(10,c)/__gcd((long)stoi(num),(long)powl(10,c))<<"\n";
    }
}