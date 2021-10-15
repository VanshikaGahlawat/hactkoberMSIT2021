#include<iostream>
using namespace std;

int *createarray(int n)
{
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i;
    }
    return a;

}


int main()
{
    int *a=new int;
    *a=10;
    cout<<*a<<endl;

    delete a;//delete a

   // int n;
    //cin>>n;

   // int *a1=new int[n];
    //*(a1+5)=20;
    //cout<<a1[5];

   /* for(int i=0;i<n;i++)
    {
        a1[i]=i;
    }
     for(int i=0;i<n;i++)
    {
        cout<<a1[i]<<" ";
    }

    delete []a1;
    a1=NULL;
    cout<<a1[0];  //now array cannot be accesed


    int *arr=createarray(n);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    */
    int r,c;
    cin>>r>>c;
    int **arr=new int*[r];
    for(int i=0;i<r;i++)
    {
        arr[i]=new int[c];
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=i*j;
        }
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<c;i++)
    {
        delete []arr[i];
    }
    delete []arr;

    arr=NULL;





}
