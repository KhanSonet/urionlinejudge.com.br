#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a, alcohol=0, gasolina=0, diesel=0;


    while ( cin >> a )
    {
        if ( a>0 && a<5 )
        {
            if ( a==4 )
            {
                break;
            }

            else if ( a==1 )
            {
                alcohol ++;
            }


            else if ( a==2 )
            {
                gasolina ++;
            }

            else if ( a==3 )
            {
                diesel ++;
            }
        }
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcohol << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}
