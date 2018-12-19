#include<bits/stdc++.h>
using namespace std;
string word[10];
int parsestr(string str)
{
    int index = 0;
    int i = 0;
    int maxlength = str.length();
    int wordcnt = 0;
    while(i < maxlength)
    {
        if(str[i]!= ' ')
        {
            word[index] = word[index]+str[i];
        }
        else
        {
            index++;
            wordcnt = index;
        }
    i++;
    }
    return wordcnt;
}
string maxrepeatedWord(int wordcntArr[],int count)
{
int max = 0;
int index = 0;
    for(int i=0;i<=count;i++)
    {
        if(wordcntArr[i] > max)
        {
        max = wordcntArr[i];
        index = i;
        }
    }

    return word[index];
}
void countwords(int count)
{
    int wordcnt = 0;
    int wordcntArr[10];
    string maxrepeatedword;
    for(int i=0;i<=count ;i++)
    {
        for(int j=0;j<=count;j++)
        {
            if(word[i]==word[j])
            {
            wordcnt++;
            }
            else
            {}
        }
        cout<<"word "<<word[i]<<" occurs "<<wordcnt<<" times "<<endl;
        wordcntArr[i] = wordcnt;
        wordcnt = 0;
    }

    maxrepeatedword = maxrepeatedWord(wordcntArr,count);
    cout<< "Max Repeated Word is " << maxrepeatedword;
}

int main()
{
string str = "I am am am good good";
int wordcount = 0;
wordcount = parsestr(str);
countwords(wordcount);
}
