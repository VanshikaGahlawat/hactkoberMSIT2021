#include<iostream>
using namespace std;

int bottomup(int* wt, int* profit, int N, int capacity)
{
    int dp[100][100]= {0};
    for(int i=0; i<=N; i++)
    {
        for(int j=0; j<=capacity; j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }

                int inc=0,exc=0;
                if(wt[i-1]<=j)
                {
                    inc=profit[i-1]+dp[i-1][j-wt[i-1]];
                }
                exc= dp[i-1][j];
                dp[i][j]= max(inc, exc);

        }
    }
    return dp[N][capacity];
}


int knapsack(int *wt, int* profit, int N, int capacity)
{
    if(N==0 || capacity==0)
    {
        return 0;
    }
    int op1= 0;
    if(wt[N-1]<= capacity)
    {
        op1= profit[N-1]+knapsack(wt, profit, N-1, capacity-wt[N-1]);
    }
    int op2= knapsack(wt, profit, N-1, capacity);
    int ans= max(op1, op2);
    return ans;
}


int main()
{
    int wt[]={2,2,3,1};
    int profit[]={10,20,10,15};
    int N= sizeof(wt)/sizeof(int);
    int capacity;
    cin>>capacity;
    cout<<bottomup(wt, profit, N, capacity)<<endl;
    cout<<knapsack(wt, profit, N, capacity)<<endl;
    return 0;
}
