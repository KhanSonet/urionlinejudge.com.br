#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    float a, sum;
    int count;

    while ( cin >> a )
    {
        if ( a<0 || a>10)
        {
            printf("nota invalida\n");
        }

        else if ( a>=0 && a<=10)
        {
            sum += a;
            count ++;

            if ( count == 2)
                break;
        }
    }

    printf("media = %.2f\n",sum/2);

    return 0;
}
