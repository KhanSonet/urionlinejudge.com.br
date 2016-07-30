#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int a[100], i, max = 0, n;

    for ( i=0 ; i<100 ; i++ )
        cin >> a[i];

    for ( i=0 ; i<100 ; i++ )
    if ( a[i]>max )
        {
            max = a[i];
            n=i+1;
        }
    cout << max << endl;
    cout << n << endl;

    return 0;
}
