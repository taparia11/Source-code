#include<stdio.h>

int add (int a,int b)
{
    printf("%d",a+b);
}

int main()
{
    int c,a,b;
    scanf("%d %d",&a,&b);
	add(a,b);

    return 0;
}