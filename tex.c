/*#include <stdio.h>
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
}*/

#include <stdio.h>
int main() {
	int p,q,a,b,c[100],i,j,t;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    scanf("%d %d ",&a,&b);
   	for(j=0;j<a;j++)
      scanf("%d",&c[j]);
    
    for(j=0;j<a-1;j++)
    	if(c[j]>c[j+1])
          p=c[j];
    	  c[j]=c[j+1];
    	  c[j+1]=p;
    
   	for(j=0;j<a;j++)
      printf("%d",c[j]);
    
  }
    
    
	
	return 0;
}