#include <stdio.h>
int main() {
   int arr[100],t,k,x,a,b,c,d,i,j,p;
  scanf("%d",&t);
  for(k=0;k<t;k++)
  {
  scanf("%d %d",&a,&b);
    for(x=0;x<a;x++)
    {
    scanf("%d",&arr[x]);
    }
   for(i=0;i<a;i++)
   {
       for(j=0;j<a;j++)
        {
            for ( p = 0; p < a; p++)
            {
                if(arr[i]+arr[j]+arr[p]==b)
                c++;
            }
            
        }
   } 
   
  }
  return 0;
}