#include<iostream>
#include<string>
using namespace std;
int main(){
string a,b;
cin>>a;
int l=a.length();
for(int i=0;i<l;i++)
   {
if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')

         continue;

      else
         {
         b=b+'.';
      b+=towlower(a[i]);
         }
   }
   cout<<b;
}
