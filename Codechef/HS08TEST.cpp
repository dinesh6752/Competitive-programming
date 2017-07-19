#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  unsigned  int x;
   float y;
    cin>>x>>y;
    if(x<(y-0.5)&&x%5==0&&y-(x+0.5))
    {
        printf("%.2f",y=y-(x+0.5));
    }
    else{
        printf("%.2f",y);
    }
}
 
