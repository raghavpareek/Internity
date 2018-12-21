#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int a[row][col],i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    int query,n,h;
    cout<<"Enter the Number of Queries\n";
    cin>>n;
    for(h=0;h<n;i++)
    {
        cin>>query;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(a[i][j]==query)
                {
                    cout<<" "<<i<<"  "<<j<<endl;
                }
                else
                {
                    cout<<"-1 -1\n";

                }
            }
        }
    }
    return 0;
}
