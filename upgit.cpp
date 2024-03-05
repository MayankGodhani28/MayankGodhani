#include<iostream>
#include<string.h>
using namespace std;

int updatebit(int n,int position,int value)
{
    n= n & ~(1<<position);
    return (n |(value<<position));
}
int main()
{
    cout<<updatebit(5,1,1);
    return 0;
}