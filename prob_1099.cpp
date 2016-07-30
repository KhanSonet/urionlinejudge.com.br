#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int N, X, Y;
    int i, j, sum = 0;

    cin >> N ;

    for ( i=0 ; i<N ; i++)
        {
            cin >> X >> Y;

            if ( X == Y )
                cout << "0" << endl;

            else if ( X > Y )
            {
                if ( X -1 == Y )
                {
                    cout << "0" << endl;
                }


                else
                {
                    for ( j = Y+1 ; j< X ; j++)

                {
                    if ( j%2 != 0 )

                    {
                        sum += j;
                    }
                }

                cout << sum << endl;
                sum = 0 ;

                }
            }

            else if ( X < Y )
            {
                if ( Y -1 == X )
                {
                    cout << "0" << endl;
                }


                else
                {
                    for ( j = X+1 ; j< Y ; j++)

                {
                    if ( j%2 != 0 )

                    {
                        sum += j;
                    }
                }

                cout << sum << endl;
                sum = 0 ;

                }
            }

        }



}
