#include<iostream>
using namespace std;
int knapsack(int W,int wt[],int val[],int n);

int max(int a,int b)
{
	return(a>b)?a:b;
}
int main()
{
	int n,W,val[n],wt[n],i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>val[i];
		cin>>wt[i];
	}
	cin>>W;
	cout<<knapsack(W,wt,val,n);
	return 0;
}
int knapsack(int W,int wt[],int val[],int n)
{
	int i,w;
	int k[n+1][w+1];
	for(i=0;i<=n;i++)
	{
		for(w=0;w<=W;w++)
		{
			if((i==0)||(w==0))
				k[i][w]=0;
			else if(wt[i-1]<=w)
			{
				k[i][w]=max(val[i-1]+k[i-1][W-wt[i-1]],k[i-1][w]);
				
			}
			else
				k[i][w]=k[i-1][w];
		}
		return k[n][w];
	}
}

