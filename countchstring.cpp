#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s="kfsjdfsnsfvdn";

    int fraq[26];
    for(int i=0;i<26;i++)
    {
        fraq[i]=0;
    }

    for(int i=0;i<s.size();i++)
    {
        fraq[s[i]-'a']++;
    }

    char ch='a';
    int maxf=0;

    for(int i=0;i<26;i++)
    {
        if(fraq[i]>maxf)
        {
            maxf=fraq[i];
            ch=i+'a';
        }
    }
    cout<<ch<<endl<<maxf;
    return 0;
}