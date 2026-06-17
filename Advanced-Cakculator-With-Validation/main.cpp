#include <iostream>
using namespace std;
int main(){
   float a, b ,temp;
   char ch;
   cout<<"Enter the first integer : ";
   cin>>a;
   cout<<"Enter the secind integer : ";
   cin>>b;
   cout<<"Enter the operator : ";
   cin>>ch;
   if((ch=='/'||ch=='%') && b==0)
   cout<<"Error: Invalid";
  else 
  {
   switch(ch)
   {
   case'+': temp=a+b;
   break;
   case'-': temp=a-b;
   break;
   case '*': temp=a*b;
   break;
   case '/': temp=a/b;
   break;
   case '%':
   if(a == (int)a && b == (int)b)
  {
   temp = (int)a % (int)b;
  }
   else
  {
   cout << "Modulus only works with integers.";
  }
   break;
   default:
   cout<<"Invalid operator ";     
   }
   cout<<"The answer = "<<temp; 
  }
    return 0;
}
