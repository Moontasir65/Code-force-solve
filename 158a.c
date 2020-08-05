#include<stdio.h>
int main()
{
   int n,k,i,count=0,a[50],j;
   scanf("%d %d",&n,&k);
   for(i=1;i<=n;i++)
   {
      scanf("%d",&a[i]);
      if(k==i)
      {
         j=a[i];
      }
   }
     for(i=1;i<=n;i++)
     {
        if(a[i]>=j&&a[i]>0)
        {
           count++;
        }

     }
  printf("%d",count);
}
