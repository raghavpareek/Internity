#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter The Size of the matrix:\n";
	cin>>n;
	int a[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		cin>>a[i][j];
	}

	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		cout<<a[i][j]<<" ";
	 	}
	 	cout<<"\n";
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		if(a[i][j]==1)
	 		{
	 			cout<<"\nThere is connection from "<<i<<" to "<<j;
	 		}
	 	}
	 }
	return 0;
}
