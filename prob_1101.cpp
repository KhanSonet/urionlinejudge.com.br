#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
   int M, N, sum = 0, i;

   while ( cin >> M && cin >> N )

   {
       if ( M <= 0 || N <= 0 )
       {
           break;
       }

       else if ( M>N )
       {
           for ( i=N ; i<=M ; i++ )
           {
               cout << i << " ";
               sum += i;
           }
           cout << "Sum=" << sum << endl;
           sum = 0;

       }

       else if ( M<N )
       {
           for ( i=M ; i<=N ; i++ )
           {
               cout << i << " ";
               sum += i;
           }
           cout << "Sum=" << sum << endl;
           sum = 0;

       }


   }



    return 0;

}
