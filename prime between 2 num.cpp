/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin>>x>>y;
    for (int i=x; i<=y; i++)
    {
        int j;
        for ( j=2; j<i; j++)
        {
            if (i%j==0)
            {
                break;
            }
        }
        if(j==i){
            cout<<j;
            
        }
    }
}
