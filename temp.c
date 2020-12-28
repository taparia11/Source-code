#include <stdio.h>
#include <string.h>

int numind(int n);


int main()
{
    int c=100,i,j,x,y=0,z,t,p,q;

    scanf("%d",&t);
    int a[t],b[t];

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
        }       i=1;
                do
                {
                    printf("%d ",a[i]);
                    i++;
                } while (--t);
                
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