#include<iostream>
using namespace std;
int main()
{
   int a,b,count=0,coun=0,d,c,e,f,n;
   cin>>n;

   for (int i=1;i<=n;i++)
   {
      cin>>a;
      cin>>b;

   a=d=c;
   b=e=f;

   if(a>=2&&b>=1){

      while(d>=2&&e>=1)
   {
      d=d-2;
      e=e-1;
      count++;
   }}

    if(a>=1&&b>=2){

   while(c>=1&&f>=2)
   {
      c=c-1;
      f=f-2;
      coun++;
   }
   }
   cout<<(count+coun)<<endl;

   count=0;
   coun=0;


   }

}
