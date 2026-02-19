#include<iostream>
using namespace std;
int main()
{
   int i,j;
   cin>>i>>j;
   for(int row=1;row<=i;row++)
   {
    for(int col=0;col<j;col++)
    {
        if(row%4==0)
        {
            if(col==j-1)
            cout<<"#";

            else
            cout<<".";
        }

        else if(row%4==2)
        {
            if(col==0)
            cout<<"#";

            else 
            cout<<".";
        }

        else
        {
         cout<<"#";
        }
    }
    cout<<endl;
   }

}  