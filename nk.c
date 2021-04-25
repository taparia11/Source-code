/*#include <stdio.h>
int main()
{
    int arr[10],i,n,j,k,item;
    printf("Enter the Number of Items\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the Number %d \n",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the Index to be Inserted\n");
    scanf("%d",&k);
    
    printf("Enter the number to be Inserted\n");
    scanf("%d",&item);
    k--;
    j=n;
    while(j>=k)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[k]=item;
    
    
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
   return 0;
}

#include <stdio.h>
void toh(int num,char from, char extra, char to);
int main() {
	int n;
  scanf("%d",&n);
  toh(n,'A','C','B');
	return 0;
}


void toh(int num,char from,char to,char extra){
  
  if(num==1){
   printf("\nMove disk 1 from rod %c to rod %c",from,to);
    return;
  }
  toh(num-1,from,extra,to);
  printf("\nMove disk %d from rod %c to rod %c",num,from, to);
  toh(num-1,extra,to,from);
  
  
  
}
*/
#include <stdio.h>
int main()
{
    int arr[10],i,n,j,k,item;
    printf("Enter the Number of Items\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the Number %d \n",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the Index to be delete\n");
    scanf("%d",&k);
    
    
    
    j=n;
    j--;
    while(j>=k)
    {
        arr[j-1]=arr[j];
        j--;
    }
    
    n--;
    
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
   return 0;
}