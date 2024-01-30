/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a=6;
    int x, y, z, w;
    
    x = a++ ; //x=6, a=7; 
    y = ++a;  // y = 8, a= 8
    z = a--; // z= 8, a=7
    w= --a; // w=6, a=6;
    
    cout<<x<<"\n"<<y<<"\n"<<z<<"\n"<<w;
    

    return 0;
}
