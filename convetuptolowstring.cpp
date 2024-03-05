#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;


int main()
{
    string str="SFJDSFDSJF";
 for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' &&str[i]<='Z')
        {
            str[i]+=32;
        }
        
    }
    cout<<str<<endl;

    //USING FUNCTION

   
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str;
    return 0;
}
