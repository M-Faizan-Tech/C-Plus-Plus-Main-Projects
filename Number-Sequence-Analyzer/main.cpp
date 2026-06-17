#include<iostream>
using namespace std;
int main()
{
    int n,counte=0,counto=0;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The sequence is :"<<endl;
    cout<<"Position 1:"<<n<<endl;
    int sum=n;
    for(int i=2;i<=15;i++)
    {
      n=n+i;
      sum=sum+n;
      cout<<"Position "<<i<<":"<<i<<"+"<<n-i<<"="<<n<<endl;
     
      if(n%2==0)
      counte=counte+1;
      else
      counto=counto+1;
    }
    cout<< "Even numbers are : "<<counte<<endl;
    cout<<"Odd number are : "<<counto<<endl;
    cout<<"Sum of all is : "<< sum<<endl;
    cout<<"The largest number is :"<< n;
    return 0;
}
