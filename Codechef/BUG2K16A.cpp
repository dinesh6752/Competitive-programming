#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  long  int T,N;
    cin>>T;
    int c=0,d=0,i=1;
 
    while(T--!=0)
    {
        cin>>N;
       d=1;
 
 
           c=N==0?0:1;
 
        while(d<N&&N>1)
        {
            d+=1+9*c;
 
 
          c++;
        }
        cout<<"Case #"<<i++<<": "<<c<<endl;
 
 
    }
 
 
}
 
