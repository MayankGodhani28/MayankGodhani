#include<iostream>
#include<string.h>
using namespace std;

int getbit(int n,int position)
{
    // if(n & (1<<position))
    // {
    //     return 1;
    // }else{
    //     return 0;
    // }
    return (n & (1<<position) !=0);
}
int main()
{
    cout<<getbit(5,2);
    return 0;
}