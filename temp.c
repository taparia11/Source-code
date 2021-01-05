#include <stdio.h>
#include <string.h>

int numind(int n);


int main()
{
    int c=100,i,j,x,y=0,z,t,p,q,f;

    scanf("%d",&t);
    int a[t],b[t],v[t];

    for(i=1;i<=t;i++)
    {
        scanf("%d",&a[i]);
        x=numind(a[i]);
        y+=i*x;
        b[i]=x;
    }
        printf("Weight of input sequence = %d\nSequence that has maximum weight\n",y);

     for (i = 1; i <= t; ++i) 
        {
            for (j = i + 1; j <= t; ++j)
            {
                if (b[i] > b[j]) 
                {
 
                    p =  b[i];
                    b[i] = b[j];
                    b[j] = p;

                    q =  a[i];
                    a[i] = a[j];
                    a[j] = q;
 
                }
            }
        }     
          i=1;f=t;
                do
                {
                   v[i]=a[i];
                    i++;
                } while (--t);
    t=f; y=0;
    for(i=1;i<=t;i++)
    {
        x=numind(a[i]);
        y+=i*x;
        b[i]=x;
    }
        for(i=1;i<t;i++)
        {
            if(b[i] == b[i+1])
           { p=a[i];
            a[i]=a[i+1];
            a[i+1]=p;}
          
       
       }
       printf("\n");
           i=1;
                do
                {
                    printf("%d ",a[i]);
                    i++;
                } while (--t);
   t=f;
 i=1;
   do
                {
                    printf("%d ",v[i]);
                    i++;
                } while (--t);
            
        printf("\nMaximum sequence weight = %d",y);

    return 0;

}

int numind(int n)
{
    int g,h=0;
    do
    {
        g=n%10;
        h+=g;
        n=n/10;

    } while (n>0);
    return h;
}