#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
   int N;
   int a,b,c,d,e,f,g;

   cin>>N;

   a = N / 100;
   b= N % 100 / 50;
   c= (N % 100) % 50 / 20;
   d= ((N % 100) % 50) % 20 / 10;
   e= (((N % 100) % 50) % 20) % 10 / 5;
   f= ((((N % 100) % 50) % 20) % 10) % 5 / 2;
   g= (((((N % 100) % 50) % 20) % 10) % 5) % 2 / 1;

   cout<<N<<endl;
   cout<<a<<" nota(s) de R$ 100,00"<<endl;
   cout<<b<<" nota(s) de R$ 50,00"<<endl;
   cout<<c<<" nota(s) de R$ 20,00"<<endl;
   cout<<d<<" nota(s) de R$ 10,00"<<endl;
   cout<<e<<" nota(s) de R$ 5,00"<<endl;
   cout<<f<<" nota(s) de R$ 2,00"<<endl;
   cout<<g<<" nota(s) de R$ 1,00"<<endl;

   return 0;
}
