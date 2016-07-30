#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int X, Z, i, sum = 0, c = 0;

    cin >> X ;

    while ( cin >> Z )
    {
        if ( Z>X && Z != X )
        {

        for ( i=X ; i<=X+Z ; i++ )
        {
          sum += i;

          if ( sum < Z )
          {
              c++;
          }

        }

        cout << c+1 << endl;

        break;

        }


    }
}
