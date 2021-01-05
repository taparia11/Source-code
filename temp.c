#include <stdio.h>
#include <string.h>

int sumd(int num);
void superd(int);

int main()
{
    int a,b,c,i,j,x,y=0,z,t,p,q,f,num;

    scanf("%d %d",&num,&b);
    c=sumd(num);
    num=c*b;
    for (i = 0; i <b; i++)
    {
        y+=c;
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

int sumd(int num)

{
    int g,h=0,p;

    if(num>=10){
    do
    {
        g=num%10;
        h+=g;
        num=num/10;

    } while (num>0);
    if(h>10)
    p=sumd(h);}

    else
    return num;


    return h;
}

void superd(int num)
{
    printf("%d",num);

}

