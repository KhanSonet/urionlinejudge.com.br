#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int N;

    cin >> N;

        while ( !cin.eof() )
    {

        if ( N>=0 && N<=100 )

        {
            if ( N == 0 )
        {
            cout << "vai ter copa!" << endl;
        }

        else if ( N!= 0 )
           {
                cout << "vai ter duas!" << endl;
           }

           cin >> N;
        }
    }

    return 0;
}
