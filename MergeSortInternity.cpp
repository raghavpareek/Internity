#include<bits/stdc++.h>
using namespace std;
void merge(vector<string>&arr,int l,int m,int h)
{
	int numLeft=m-l+1;
    int numRight=h-m;
    string L[numLeft], R[numRight];
    int i,j,k=l;
    for(i=0;i<numLeft;i++)
	L[i]=arr[i+l];
    for(j=0;j<numRight; j++)
	R[j] = arr[j + m + 1];

    i = j = 0;
	while(i<numLeft&&j<numRight)
	{
		if(L[i].length()<=R[j].length() )
		{
			arr[k] = L[i];
            i++;
		}
        else
        {
	        arr[k]=R[j];
            j++;
        }
        k++;
	}

	while(i<numLeft)
    {
	    arr[k]=L[i];
        i++;
        k++;
    }

    while(j<numRight)
    {
	    arr[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(vector<string>&arr, int l, int h)
{
	if(l<h)
    {
		int mid=l+(h-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid + 1,h);
        merge(arr,l,mid,h);
	}
}
int main() {
	int n;
	cin >> n;
    cin.ignore();
    int count = 0;
    while(count < n)
    {
	    string inputStr, currStr;
	    vector<string> strArr;
        getline(cin, inputStr);
        stringstream ss(inputStr);
    	while( getline(ss, currStr, ' ') )
    	{
    		strArr.push_back(currStr);
    	}
        mergesort(strArr, 0, strArr.size() - 1);
        for(int i = 0; i < strArr.size(); i++)
        {
            cout<<" "<<strArr[i];
        }
        cout << endl;
    	count++;
    }
    return 0;
}
