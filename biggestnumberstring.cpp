#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    string str="119231";

    sort(str.begin(),str.end(),greater<int>());
    cout<<str;
    return 0;
}