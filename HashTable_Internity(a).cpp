#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mapp;
    int n;
    cin>>n;
    string str;
    int i;
    map<string,int>::iterator it;
    for(i=0;i<n;i++)
    {
        cin>>str;
        it=mapp.find(str);
        if(it!=mapp.end())
        {
            it->second++;
        }
        else
        {
            mapp.insert(pair<string,int>(str,1));
        }
    }
      for(it=mapp.begin();it!=mapp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
