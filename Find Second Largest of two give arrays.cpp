#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr1[50], arr2[50], n2,n1,m,i,j,k,new_array[100];
	cout<<"Enter Array 1 Size : ";
	cin>>n1;
	cout<<"Enter Array 1 Elements : ";
	for(i=0; i<n1; i++)
	{
		cin>>arr1[i];
	}
	cout<<"Enter Array 2 Size : ";
	cin>>n2;
	cout<<"Enter Array 2 Elements : ";
	for(i=0; i<n2; i++)
	{
		cin>>arr2[i];
	}
	for(i=0; i<n1; i++)
	{
		new_array[i]=arr1[i];
	}
	m=n1+n2;
	for(i=0, k=n1; k<m && i<n2; i++, k++)
	{
		new_array[k]=arr2[i];
	}
	cout<<"Now the new array after merging is :\n";
	for(i=0; i<m; i++)
	{
		cout<<new_array[i]<<"\n";
	}
	sort(new_array,new_array+m);
	cout<<"Sort them \n";
	for(i=0; i<m; i++)
	{
		cout<<new_array[i]<<" ";
	}
	cout<<"\n\nSecond Largest element is:\n";
	cout<<new_array[m-2];
}
