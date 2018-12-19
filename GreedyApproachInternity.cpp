 #include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int k,count=0;
        cin>>s>>k;
        for(int i=0;i<=s.length()-k;i++)
        {
            if(s[i]=='0')
            {
                for(int j=i;j<i+k;j++)
                {
                    if(s[j]=='0') s[j]='1';
                    else s[j]='0';
                }
                count++;
            }
        }
        bool b=true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                b=false;
                break;
            }
        }
        if(b) cout<<count<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
