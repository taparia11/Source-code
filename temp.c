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
    /*for (i = 0; i <b; i++)
    {
        y+=c;
    }
    num=y;*/
    superd(sumd(num));
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

