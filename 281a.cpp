//A-Z=65-90
//a-z=97-122
#include<iostream>
#include<string>
using namespace std;
int main()
{
   string name;
   cin>>name;

      if(name[0]>96)
      {
         name[0]=name[0]-32;
      }
   cout<<name;
}
