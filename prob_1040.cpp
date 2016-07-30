#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
    float a, b, c, d, e, m, avg2;

    cin>>a>>b>>c>>d;

     m = (a * 2 + b * 3 + c * 4 + d) / 10;

     printf("Media: %.1f\n",m);

     if ( m >= 7)
     {
         cout<<"Aluno aprovado."<<endl;

     }

        else if ( m < 5)
     {
         cout<<"Aluno reprovado."<<endl;
     }

         if ( m >= 5 && m<=6.9)
     {
         cout<<"Aluno em exame."<<endl;

          cin>>e;

          printf("Nota do exame: %.1f\n",e);


     if ( ( m+e ) / 2.0 >= 5)
     {
         cout<<"Aluno aprovado."<<endl;
     }

        else if ( ( m+e ) / 2.0 <= 4.9)
     {
         cout<<"Aluno reprovado."<<endl;
     }
      printf("Media final: %.1f\n",( m+e ) / 2.0);
     }

     return 0;
}
