#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
   
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;

    int r=0;
    int c=m-1;
    bool found=0;
   while(r<n && c>=0)
   {
        if(arr[r][c] ==target)
        {
            found=1;
        }
        if(arr[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
   }
   if(found)
   {
    cout<<"elimate found"<<endl;
   }
    else
    {
    cout<<"elimate does not exist"<<endl;
    }
    
    return 0;
}