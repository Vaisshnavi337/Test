#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
clock_t start_time,end_time;
double exe_time;
int main()
{
	int j,i,v,e,d,k;
	int a[100][100];
	cout<<"enter number of vertices";
	cin>>v;
	cout<<"enter no of edges";
	cin>>e;
	cout<<"enter d,0 for undir,1 for dir";
	cin>>d;
	start_time=clock();
	if(d==0)
	{
		for(k=0;k<e;k++)
		{
			cout<<"enter i,j";
			cin>>i>>j;
			a[i][j]=1;
			a[j][i]=1;
		}
	}
	if(d==1)
	{
		for(k=0;k<e;k++)
		{
			cout<<"enter i,j";
			cin>>i>>j;
			a[i][j]=1;
		}
	}
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
		{
			if(a[i][j]==1)
				cout<<a[i][j]<<" ";
			else
				cout<<"0 ";
		}
		cout<<"\n";
	}
	end_time=clock();
	exe_time=(double)(end_time-start_time)/(CLOCKS_PER_SEC);
	cout<<"\n"<<exe_time;
}
