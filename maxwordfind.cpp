#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int curl=0;
    int maxl=0;
    int st=0,maxst=0;
    while(1)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(curl>maxl)
            {
                maxl=curl;
                maxst=st;
               
            }
            curl=0;
            st=i+1;
        }
        else{
            curl++;
        }
        
        if(arr[i] == '\0')
        {
            break;
        }
        i++;
    }  
    cout<<maxl<<endl;
    for(int i=0;i<maxl;i++)
    {
        cout<<arr[i+maxst];
    }
    return 0;
}