#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"------AVAILABLE DEPARTMENTS-------"<<endl;
    cout<<"CS - Computer Science."<<endl;
    cout<<"EE - Electrical Engineering."<<endl;
    cout<<"ME - Machanical Engineering."<<endl;
    cout<<"BBA - Business Administration."<<endl;

    cout<<"------AVAILABLE SEMESTER-------"<<endl;
    cout<<"1-8"<<endl;

    cout<<"-----PREREQUISTIES------"<<endl;
    cout<<"OOP--------------------->PF"<<endl;
    cout<<"DSA--------------------->PF"<<endl;
    cout<<"DLD--------------------->Basic Electronics"<<endl;
    cout<<"Thermodynamics---------->Physics 1"<<endl;
    cout<<"Finantial accounting---->Principlies of Managment"<<endl;

    string department;
    int semester;
    cout<<"Enter the Department name : "<<endl;
    cin>>department;
    cout<<"Enter the Semester Number : "<<endl;
    cin>>semester;
    cout<<"------COURSE RECOMMENDATIONS------"<<endl;
    if(department == "CS")
    {
        if(semester==1)   
        cout<<"Programming Fundamentals(Credit hour = 3)"<<endl;
        else if(semester==2)
        cout<<"OOP(credit hour=4)"<<endl;
        else if(semester==3)
        cout<<"DSA(credit hour=3)"<<endl;
        else if(semester==4)
        cout<<"DLD(credit hour=3)"<<endl;
        else if(semester==5)
        cout<<"CN(Credit hour=3)"<<endl;
        else if(semester==6)
        cout<<"Calculus(credit hour=3)"<<endl;
        else if(semester==7)
        cout<<"Discreet Math(Credit hour=3)"<<endl;
        else if(semester==8)
        cout<<"FYP(credit hour=5)"<<endl;
        else
        cout<<"Invalid Semester."<<endl;
    }
    else if(department == "EE")
    {
        if(semester==1)   
        cout<<"Electronics Fundamentals(Credit hour = 3)"<<endl;
        else if(semester==2)
        cout<<"Basic Electronics(credit hour=4)"<<endl;
        else if(semester==3)
        cout<<"Wire Combinations(credit hour=3)"<<endl;
        else if(semester==4)
        cout<<"DLD(credit hour=3)"<<endl;
        else if(semester==5)
        cout<<"CN(Credit hour=3)"<<endl;
        else if(semester==6)
        cout<<"Calculus(credit hour=3)"<<endl;
        else if(semester==7)
        cout<<"Discreet Math(Credit hour=3)"<<endl;
        else if(semester==8)
        cout<<"FYP(credit hour=5)"<<endl;
        else
        cout<<"Invalid Semester."<<endl;
    }
    else if(department == "ME")
    {
        if(semester==1)   
        cout<<"Engineering Drawing(Credit hour = 3)"<<endl;
        else if(semester==2)
        cout<<"Material Science(credit hour=4)"<<endl;
        else if(semester==3)
        cout<<"Thermodynamics(credit hour=3)"<<endl;
        else if(semester==4)
        cout<<"DLD(credit hour=3)"<<endl;
        else if(semester==5)
        cout<<"FLuid Machinics(Credit hour=3)"<<endl;
        else if(semester==6)
        cout<<"Calculus(credit hour=3)"<<endl;
        else if(semester==7)
        cout<<"Diffrentials equations(Credit hour=3)"<<endl;
        else if(semester==8)
        cout<<"FYP(credit hour=5)"<<endl;
        else
        cout<<"Invalid Semester."<<endl;
    }
    else if(department == "BBA")
    {
        if(semester==1)   
        cout<<"Principle of Managment(Credit hour = 3)"<<endl;
        else if(semester==2)
        cout<<"Bussiness Managment(credit hour=4)"<<endl;
        else if(semester==3)
        cout<<"Financial accounting(credit hour=3)"<<endl;
        else if(semester==4)
        cout<<"Business Communications(credit hour=3)"<<endl;
        else if(semester==5)
        cout<<"bussiness law(Credit hour=3)"<<endl;
        else if(semester==6)
        cout<<"Calculus(credit hour=3)"<<endl;
        else if(semester==7)
        cout<<"Principle of finance(Credit hour=3)"<<endl;
        else if(semester==8)
        cout<<"FYP(credit hour=5)"<<endl;
        else
        cout<<"Invalid Semester."<<endl;
    }
    else
    cout<<"Invalid Department";
    return 0;
}
