#include<iostream>
#include<string>
using namespace std;
int main()
{
   int z,i,n=0,m=0,t=0;
   string a;
   cin>>a;
   for(i=0;i<a.size();i++)
{
  if((a[i])=='1')
  {
     n++;
     m=0;
  }
 else if(a[i]=='0')
{
   m++;
   n=0;
}

if(n>=7||m>=7)
{
   z=1;
   cout<<"YES"<<endl;
 break;
}

}
if(z!=1)
cout<<"NO"<<endl;
//if(n>=7||m>=7)
//{
//cout<<"YES"<<endl;

//}
//else
//{
 //  cout<<"NO"<<endl;
//}
}
