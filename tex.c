#include <stdio.h>
int main() {
  int t,a[100],i,p=0,j,r,k;
  scanf("%d",&t);
  r=t;
  for(i=0;i<r;i++)
    scanf("%d",&a[i]);
    for(k=0;k<r-1;k++)
    {
      
    for(i=0;i<t;i++)
    if(p<a[i])
    {
      p=a[i];
      j=i;
    }
    for(i=j;i<t-1;i++)
    {
      a[i]=a[i+1];
      if(j=t-2)
      a[i+1]=p;
    }
    for(i=0;i<r;i++)
    printf("%d ",a[i]);
    printf("\n");
    p=0;
    t--;
    }
	return 0;
}