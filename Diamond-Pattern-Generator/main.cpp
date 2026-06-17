#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=1;i<=n/2+1;i++)
    {
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        for(int k=1;k<=2*i-1;k++)
        cout<<"*";
        cout<<endl;
    }
   for(int i=n/2;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        for(int k=1;k<=2*i-1;k++)
        cout<<"*";
        cout<<endl;
    }
return 0;
}
