#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
clock_t start_time,end_time;
double exetime;
int main()
{
	int i,n,j,g[100][100],d[100],v;
	cout<<"enter vertices";
	cin>>n;
	start_time=clock();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>g[i][j];
		}
	}
	cout<<"enter vertex to check";
	cin>>v;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(g[i][j]==1)
			{
				d[i]=d[i]+1;
			}
		}
	}
	if(d[v]==0)
	cout<<"isolated";
	else
	cout<<"not isolated";
	end_time=clock();
	exetime=(double)(end_time-start_time)/(CLOCKS_PER_SEC);
	cout<<exetime;
}
