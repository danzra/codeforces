#include<iostream>
using namespace std;
int main()
{
    long long int m,n,a,len,bre,sum;
    cin>>n>>m>>a;
    len=m/a;
    bre=n/a;
    if(m%a!=0)
    {
        len++;

    }
    if(n%a!=0)
    {
        bre++;
    }
    sum=len*bre;
    cout<<sum<<endl;


}