#include<iostream>
using namespace std;
int main ()
{
    char arr[3][3];
    char x='X',o='O',win='-';
    int xcount=0, ocount=0,ecount=0;
    cout<<"Enter your values"<<endl;
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    cin>>arr[i][j];
    }
    if(arr[0][0]==arr[0][1]&& arr[0][1]==arr[0][2]&&arr[0][0]!='-')
    {
        if(arr[0][0]=='X')
        win=x;
        else
        win=o;
    }
    if(arr[1][0]==arr[1][1]&& arr[1][1]==arr[1][2]&&arr[1][0]!='-')
    {
        if(arr[1][0]=='X')
        win=x;
        else
        win=o;
    }
    if(arr[2][0]==arr[2][1]&& arr[2][1]==arr[2][2]&&arr[2][0]!='-')
    {
        if(arr[2][0]=='X')
        win=x;
        else
        win=o;
    }
    if(arr[0][0]==arr[1][0]&& arr[1][0]==arr[2][0]&&arr[0][0]!='-')
    {
        if(arr[0][0]=='X')
        win=x;
        else
        win=o;
    }
    if(arr[0][1]==arr[1][1]&& arr[1][1]==arr[2][1]&&arr[0][1]!='-')
    {
        if(arr[0][1]=='X')
        win=x;
        else
        win=o;
    }
    if(arr[0][2]==arr[1][2]&& arr[1][2]==arr[2][2]&&arr[0][2]!='-')
    {
        if(arr[0][2]=='X')
        win=x;
        else
        win=o;
    }
    if(arr[0][0]==arr[1][1]&& arr[1][1]==arr[2][2]&&arr[0][0]!='-')
    {
        if(arr[0][0]=='X')
        win=x;
        else
        win=o;
    }
    if(arr[0][2]==arr[1][1]&& arr[1][1]==arr[2][0]&&arr[0][2]!='-')
    {
        if(arr[0][2]=='X')
        win=x;
        else
        win=o;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]=='X')
            xcount++;
            if(arr[i][j]=='O')
            ocount++;
            if(arr[i][j]=='-')
            ecount++;
        }
    }
    cout<<"X-Count : "<<xcount<<endl;
    cout<<"O-Count : "<<ocount<<endl;
    cout<<"--Count : "<<ecount<<endl;
    cout<<"Game Status  "<<endl;
    if(win==x)
    cout<<"Winner is X"<<endl;
    else if(win==o)
    cout<<"Winner is O"<<endl;
    else if(ecount>0)
    cout<<"Game is On-going";
    else 
    cout<<"Draw";
    return 0;
}
