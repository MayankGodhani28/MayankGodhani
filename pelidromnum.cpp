#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;
    int i=0;
    bool check=1;
    while(arr[i] != '\0')
    {
        if(arr[i] != arr[n-1-i])
        {
            check =0;
            break;
        }
        i++;
    }

    if(check)
    {
        cout<<"pelidrom"<<endl;
    }
    else
    {
        cout<<"Not pelidrom"<<endl;
    }
    return 0;
}