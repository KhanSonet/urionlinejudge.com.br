#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int N, X[10000], i;

    cin >> N;


    if ( N<10000)
    {
     for ( i=0 ; i<N ; i++ )
        cin >> X[i];

        for ( i=0 ; i<N ; i++ )

    if ( X[i]<0 )

        {
            if ( X[i]%2 == 0)
            cout << "EVEN NEGATIVE"<< endl;

            else if ( X[i]%2 != 0)
            cout << "ODD NEGATIVE" <<endl;
        }

    else if ( X[i]>0 )
          {
              if ( X[i]%2 ==0 )
                cout << "EVEN POSITIVE" << endl;

              else if ( X[i]%2 !=0 )
                cout << "ODD POSITIVE" << endl;
          }

    else if ( X[i]==0 )
    {
        cout << "NULL" << endl;
    }
    }

          return 0;
}
