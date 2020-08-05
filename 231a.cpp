#include<iostream>
using namespace std;
int main()

{
   int n,i,pety,vasya,tonya,count=0;
   cin>>n;
   for(i=1;i<=n;i++)
   {
   cin>>pety>>vasya>>tonya;
   if(pety+vasya+tonya>1)
   {
      count++;
   }

   }
cout<<count;

}

