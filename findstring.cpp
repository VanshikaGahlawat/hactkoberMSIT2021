#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sr=0,er=n-1,sc=0,ec=n-1;
    int k=0;
    char ch;
    int i,j,space;

    while(sr<=er && sc<=ec)
    {
        if(k==0)
        {
            ch='X';
        }
        else
        {
            ch='O';
        }

        for(j=sc;j<=ec;j++)
        {
            cout<<ch;
        }
        sr++;

        for(i=sr;i<=er;i++)
        {
            cout<<ch<<endl;
        }
        ec--;

        if(sr<=er)
        {
            cout<<endl;
            for(space=1;space<n;space++)
            {
                cout<<" ";
            }
            for(j=ec;j>=sc;j--)
            {
                cout<<ch;
            }
            er--;
        }

        if(sc<=ec)
        {
            for(i=er;i>=sr;i--)
            {
                cout<<endl<<ch;
            }
            sc++;
        }
        k=1-k;
    }
}
