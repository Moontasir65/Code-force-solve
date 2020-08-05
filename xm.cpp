#include<iostream>
using namespace std;
int main()
{
   int a,b,c=0,d=0,n;
   cin>>n;

   for(int i=1;i<=n;i++){
         cin>>a;
   cin>>b;

   if(a>=2&&b>=1){

c=0;
      while(a>=2&&b>=1)
   {
      a=a-2;
      b=b-1;
      c++;
   }}
    if(a>=1&&b>=2){
d=0;
   while(a>=1&&b>=2)
   {
      a=a-1;
      b=b-2;
      d++;
   }}
   cout<<(c+d)<<endl;

   }
}
