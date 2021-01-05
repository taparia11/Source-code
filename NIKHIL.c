#include <stdio.h>
<<<<<<< HEAD
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
=======

int main()
{
   
>>>>>>> 5cb317cce03923e9bc4d60cf448d871e71bc82cf
}