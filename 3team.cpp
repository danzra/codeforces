#include<iostream>
using namespace std;
int main()
{ 
    
    int n;
    cin>>n;
    int sum=0;
    while(n--)
    {
       int a,b,c;
        cin>>a>>b>>c;
        if(a+b==2 || a+c==2 || b+c==2)
        {
            sum=sum+1;
        }
       

        

    }
     cout<<sum<<endl;
}