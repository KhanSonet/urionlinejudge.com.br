#include<iostream>
#include<cstdio>

using namespace std;

int main ( void )
{
    int a, b, c, d, hour , minute;

    cin >> a >> b >> c >> d;

       if ( a==c && b==d )
       {
           hour = 24;
           minute = 0;
       }

       else if ( a > c  )
        {
            if ( d>b )
            {
                hour = 24 - (a-c);
                minute = d-b;
            }

            else if ( b>d )
            {
                hour = 24 - (a-c) - 1;
                minute = 60 - ( b-d );
            }
        }

        else if ( a < c )
        {
            if ( d>b )
            {
                hour = c-a;
                minute = d-b;
            }

            else if ( b>d )
            {
                hour = c-a - 1;
                minute = 60 - ( b-d );
            }
        }

        cout << "O JOGO DUROU " << hour << " HORA(S) E " << minute << " MINUTO(S)" << endl;

    return 0;
}
