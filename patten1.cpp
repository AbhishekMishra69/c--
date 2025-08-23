#include<iostream>
using namespace std;
int main()
{
    int row,col,r=1;
    for(row=1;row<=5;row++)
    {
        
        for(col=5;col>=1;col--)
        {   
            
            cout<<col<<" ";
            r++;
        }
        cout<<endl;
    }
}