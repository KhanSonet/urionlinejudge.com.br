#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int A, N, i, sum = 0;

    cin >> A ;

    while ( cin >> N )
    {
       if ( N>0 && N!=0 )
       {
           for ( i=A ; i<A+N ; i++ )
           {
               sum += i;
           }
           cout << sum << endl;

           break;
       }
    }

    return 0;

}
