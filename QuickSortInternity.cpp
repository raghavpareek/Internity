#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,b,g,j,k,count,a;
    cin>>t;
    for(i=0;i<t;i++)
     {
         cin>>b>>g;
         int B[b],G[g];
         for(j=0;j<b;j++)
          {
              cin>>B[j];
          }
         for(j=0;j<g;j++)
          {
              cin>>G[j];
          }
         sort(B,B+b);
         sort(G,G+g);
         a=0;
         count=0;
         for(j=0;j<b;j++)
          {
              for(k=0+a;k<g;k++)
               {
                   if(B[j]>G[k])
                    {
                        a=k;
                        count++;
                        break;
                    }
               }
          }
             if(count==b)
              cout<<"YES\n";
             else
              cout<<"NO\n";
     }
    return 0;
}
