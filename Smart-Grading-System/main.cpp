#include <iostream>
using namespace std;
int main()){
    int quiz1,quiz2,quiz3,mids,final,attendence;
    float sum,quizweight,midsweight,finalweight,total;
    cout<<"Enter marks in first quiz : ";
    cin>>quiz1;
    cout<<"Enter marks in second quiz : ";
    cin>>quiz2;
    cout<<"Enter marks in third quiz : ";
    cin>>quiz3;
    sum=quiz1+quiz2+quiz3;
    quizweight=(sum/30.0)*20;
    cout<<"Enter marks in mids : ";
    cin>>mids;
    midsweight=(mids/35.0)*30;
    cout<<"Enter marks in finals : ";
    cin>>final;
    finalweight =(final/40.0)*50;
    total=quizweight+midsweight+finalweight;
    cout<<"Enter Attendence : ";
    cin>>attendence;
    if(total>=85&&attendence>=75)
    cout<<"Your grade is A.";
    else if(total>=85&&attendence<75)
    cout<<"Your grade is B.";
    else if(total>=70&&attendence>=75)
    cout<<"Your grade is B.";
    else if(total>=70&&attendence<75)
    cout<<"Your grade is C.";
    else if(total>=50&&attendence>=75)
    cout<<"Your grade is C.";
    else
    cout<<"Your grade is F.";
    return 0;
}
