#include <stdio.h>
int main() {
   int arr[100],t,k,x,a,b,c=0,d,i,j,p;
  scanf("%d",&t);
  for(k=0;k<t;k++)
  {
  scanf("%d %d",&a,&b);
    for(x=0;x<a;x++)
   //avik 
   {
    scanf("%d",&arr[x]);
    }
   for(i=0;i<a-2;i++)
   {
       for(j=i+1;j<a-1;j++)
        {
            for ( p = j+1; p < a; p++)
            {
                if(arr[i]+arr[j]+arr[p]==b)
                c++;
            }
            
        }
   } 
   printf("%d\n",c);
   c=0;
  }
  return 0;
}