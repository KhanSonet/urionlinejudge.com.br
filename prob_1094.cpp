#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int N, Amount = 0 , i ;
    char Type ;
    float c, r, s, C = 0, R = 0, S = 0 , total = 0 ;

    cin >> N;

    for ( i=0; i<N ; i++ )
    {
        cin >> Amount ;
        cin >> Type ;

        if ( Amount >=1 && Amount <= 15 )
        {
            if ( Type == 'C' )
            {
                C +=Amount;
            }

            else if ( Type == 'R' )
            {
                    R +=Amount;
            }

            else if ( Type == 'S' )
            {
                S +=Amount;
            }
        }


    }

       total = C+R+S ;

       c = C/total;
       r =R/total;
       s =S/total;

        cout << "Total: " << (int)total << " cobaias" << endl;
        cout << "Total de coelhos: " << C << endl;
        cout << "Total de ratos: " << R << endl;
        cout << "Total de sapos: " << S << endl;
        printf("Percentual de coelhos: %.2f %%\n",(float) c*100);
        printf("Percentual de ratos: %.2f %%\n",(float) r*100);
        printf("Percentual de sapos: %.2f %%\n",(float) s*100);

    return 0;
}
