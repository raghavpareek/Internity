#include<bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cout<<"Enter the number\n";
	cin >> num;
	for(int i=0;i<num;i++)
	{
	    double a,b;
	    cin>>a>>b;

        double p = a/(a+b);
	    if(a==0 || b==0)
	    	p = 1;
	    double d = b/(a+b);
	    b--;
	    d *= b/(a+b);
	    b--;
	    while(b > 0)
	    {
	    	p = p + d * (a/(a+b));
	    	d *= b/(a+b);
	    	b--;
	    	d *= b/(a+b);
	    	b--;
		}
		cout<<p;
	}
	return 0;
}
