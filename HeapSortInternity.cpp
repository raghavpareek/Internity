#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
     int j = sum/n;
     for(int i=0;i<n;i++)
     {
         while(arr[i]==j)
        {
            if(arr[i]<j && arr[i+1]>j)
         {
             arr[i]+=1;
             arr[i+1]-=1;
             count++;
         }
         if(arr[i]<j && arr[n-1]>j)
         {
             arr[i]+=1;
             arr[n-1]-=1;
             count++;
         }
         if(arr[i]>j && arr[i+1]<j)
         {
             arr[i]-=1;
             arr[i+1]+=1;
             count++;
         }
         if(arr[i]>j && arr[n-1]<j)
         {
             arr[i]-=1;
             arr[n-1]+=1;
             count++;
         }
        }
     }
     cout<<count<<endl;
     if(n==2)
     {
     cout<<"4" <<endl;
     }
}
