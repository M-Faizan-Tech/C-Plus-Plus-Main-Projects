#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[10];
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter marks of student "<< i + 1 << " : ";
        cin >> arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    int countpass=0;
    int countfail=0;
    for(int i=0;i<10;i++)
    {
       sum=sum+arr[i];
       if(arr[i]>max)
      {\r
        max=arr[i];
      }\r
      if(arr[i]<min)
      {\r
          min=arr[i];
      }\r
      if(arr[i]>=50)
      countpass+=1;
      else
      countfail+=1;
    } \r
    cout<<"Maximum number are : "<< max<<endl;
    cout<<"Manimum number are : "<< min<<endl;
    cout<<"Total passed students : " <<countpass<<endl;
    cout<<"Total fail students : "<<countfail<<endl;
    int avg=sum/10;
    cout<<"Average = "<<avg <<endl;
    cout<<"Student Above Averge :"<<endl;
    for(int i=0;i<10;i++)
    {
      if(arr[i]>avg)
      cout<<"Student "<<i+1<<" marks : "<<arr[i]<<endl;
    }
    return 0;
}
