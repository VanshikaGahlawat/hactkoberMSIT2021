#include<iostream>
using namespace std;
int main()
{
    int N, line, i, count, j;
    cout<<"Enter N : \n";
    cin>>N;
    count = 0;
    while(N>0)
    {
        if(N%2 == 1)
        {
            count++;
        }
        N=N/2;
    }
    cout<<count;
    return 0;
}
