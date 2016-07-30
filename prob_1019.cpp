#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
   int N;
   int a,b,c;

   cin>>N;

   a = N % 60;
   b = N %3600 / 60;
   c = N / 3600;
   cout<<c<<":"<<b<<":"<<a<<endl;

   return 0;
}
