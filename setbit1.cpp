#include<iostream>
using namespace std;
int main()
{
    int n,line,i,counter,j;
    cin>>n;
    counter=0;
    while(n>0)
    {
        if(n%2==1)
        {
            counter++;
        }
        n=n/2;
    }
    cout<<counter;
}
