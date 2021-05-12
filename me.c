/*#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   
   fptr = fopen("program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}*/

#include<stdio.h> 
void main () 
{ 
    int i,num,a=0;
    float sum;
    printf("Enter the number of elements:");    
    scanf("%d",&num);    
    for(i=1;i<=num;i++) 
    { 
        a=a+i;
    }
    sum=0.5*a;
    printf("\nThe sum of the series upto %d: %0.2f ",num,sum);
}