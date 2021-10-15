#include<iostream>
using namespace std;

int fact(int n)
{
    int ans=1;
    for(int i=n;i>=1;i--)
    {
        ans=ans*i;
    }
    return ans;
}

void ncr(int n,int r)
{
   int ncr=fact(n)/(fact(n-r)*fact(r)) ;
   cout<<ncr;
   return;
}

int main()
{
    int n,r;
    cin>>n>>r;
    ncr(n,r);

}
