#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int V, N[10], i;

    cin >> V;

    if ( V<50 )

        for ( i=0 ; i<10 ; i++ )

    {
        N[i] = V ;
        cout << "N[" << i << "] = " << N[i] << endl;

        V *= 2;

    }

    return 0;

}
