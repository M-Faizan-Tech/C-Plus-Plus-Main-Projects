#include<iostream>
#include<string>
using namespace std;
int main()
{
string product[15];
int productprice[15];
int min=100000000,m1, max=0, m2;
float avg, sum=0;
int rangstart,rangend;
char ch;
cout<<"Enter the product name and price : "<<endl;
for (int i=0; i<15; i++)
 {
cin>>product[i];
cin>>productprice[i];
 }
 cout<<"\nYour list is: "<<endl;
 for(int i=0; i<15; i++)
 {
 cout<<"Product name: "<<product[i]<<'\t'<<"Product price: "<<productprice[i]<<endl;
 if(min>productprice[i])
 {
 min=productprice[i];
 m1=i;
 }
 if(max<productprice[i])
 {
 max=productprice[i];
 m2=i;
 }
 sum+=productprice[i]; 
 }
 avg=sum/15;
 cout<<"\nCheapest is: "<<product[m1]<<'\t'<<min<<endl;
 cout<<"\nExpensive is: "<<product[m2]<<'\t'<<max<<endl;
 cout<<"\nAverage price is: "<<avg<<endl;
 cout<<"\nDo you wanna find product by a specific range\n ";
 cin>>ch;
 if(ch=='y')
 {
 cout<<"Enter the starting range "<<endl;
 cin>>rangstart;
 cout<<"Enter the closing range "<<endl;
 cin>>rangend;
 for(int i=0; i<15; i++)
 {
 if(productprice[i]>=rangstart && productprice[i]<=rangend)
 cout<<product[i]<<'\t'<<productprice[i]<<endl;
 }
 }
 else 
 cout<<"\nUser doesnot want to give the range "<<endl;
 cout<<"Do you wanna sort your list \n";
 cin>>ch;
 if(ch=='y')
 {
 for(int i=0; i<15; i++)
 for(int j=0;j<14; j++)
 {
 if(productprice[j]>productprice[j+1])
 {
 int tempp;
 tempp=productprice[j];
 productprice[j]=productprice[j+1];
 productprice[j+1]=tempp;
 
 string temp;
 temp=product[j];
 product[j]=product[j+1];
 product[j+1]=temp;
 }
 }
cout<<"\nUser want the sorted list\n";
cout<<"sorted form is: \n";
for(int i=0; i<15; i++)
cout<<"Product name "<<product[i]<<'\t'<<"Product price "<<productprice[i]<<endl;
 }
 else
 cout<<"\nUser doesnt want to sort the list/n";
 return 0;
}
