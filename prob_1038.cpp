#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int X,Y;
    float total;

    cin>>X>>Y;

    if ( X==1 )
    {
        total = 4*Y;
    }

      if ( X==2 )
    {
       total =  (float)4.50*Y;
    }

      if ( X==3 )
    {
        total = 5*Y;
    }

      if ( X==4 )
    {
        total = 2*Y;
    }

      if ( X==5 )
    {
       total =  (float)1.5*Y;
    }

    printf("Total: R$ %.2f\n",total);

    return 0;

}
