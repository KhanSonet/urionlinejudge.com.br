#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a, i, j;

    cin >> a;

    for ( i=1 ; i<a*4 ; i += 4 )
    {
        for ( j=i ; j<i+3 ; j++ )
        {
            cout << j << " " ;
        }
        cout << "PUM" << endl;
    }

    return 0;
}
