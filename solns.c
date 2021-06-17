/* Enter your solutions in this file */
#include <stdio.h>
#include<assert.h>
int max(int a[],int n)
{  
  int i, x=a[0];
  for(i=0;i<n;i++)
  {
     if(x<a[i]);
    x=a[i];
  }
  
     return x;
  
}

 int min(int a[],int n)
 {int i,x=a[0];
  for(i=0;i<n;i++)
  {
    if(x>a[i])
    x=a[i];
  }
  
  return x;
 }
float average(int a[],int n)
{ int i;
 float sum=0;
 for(i=0;i<n;i++)
 {
   sum+=a[i];
 }
 sum=sum/n;
  return sum;
 
}

  int factors(int n,int a[])
  {
    int i,j =0;
    int x=n;
    for (i=2;i<=n;i++)
    {
      a[j]=i;
      //printf("%d%d%d%d\n",j,n,a[j]);
      n=n/i;
      i=1;
        j++;
    }
  }
    return j;
}
 
  int mode(int a[],int n)
  { 
    int i=0;
    int g=0;
    int x= max(a,n);
    int y= min(a,n);
    int b[x+(y*-1)+1];
      for (i=y;i<=x;i++)
      { int k=0;
         for(int j=0;j<n;j++)
         {
           if(a[j]==1)
             k++;
         }
       b[i]=k;
       if (k>g)
       {
         g=i;
       }
       return g;
      }
