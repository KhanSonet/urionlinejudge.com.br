#include<iostream>
#include<cstdio>

using namespace std;

int main ()
{
    int a,b,i;
    float c,d=0.00;

    for (i=0 ; i<2 ; i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;

         d += (b*c);
     }

      printf("VALOR A PAGAR: R$ %.2f\n",d);
      return 0;

}
