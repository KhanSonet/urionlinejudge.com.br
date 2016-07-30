#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
    int i, j;

    for ( i=1 ; i<2 ; i += 2 )
        {
            for ( j=7 ; j>=5 ; j-- )
            cout << "I=" << i << " J=" << j << endl;
        }

        for ( i=3 ; i<4 ; i += 2 )
        {
            for ( j=9 ; j>=7 ; j-- )
            cout << "I=" << i << " J=" << j << endl;
        }

        for ( i=5 ; i<6 ; i += 2 )
        {
            for ( j=11 ; j>=9 ; j-- )
            cout << "I=" << i << " J=" << j << endl;
        }

        for ( i=7 ; i<8 ; i += 2 )
        {
            for ( j=13 ; j>=11 ; j-- )
            cout << "I=" << i << " J=" << j << endl;
        }

        for ( i=9 ; i<10 ; i += 2 )
        {
            for ( j=15 ; j>=13 ; j-- )
            cout << "I=" << i << " J=" << j << endl;
        }



    return 0;
}
