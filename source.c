#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
int board[20],count;
 
int main()
{
 int n,i,j;
 void queen(int row,int n);
 scanf("%d",&n);
 queen(1,n);
 return 0;
}
void print(int n)
{
 int i,j;
 //printf("\n\nSolution %d:\n\n",++count);
 //printf("\n\n");
 for(i=1;i<=n;++i)
  //printf(" ");
 
 for(i=1;i<=n;++i)
 {
  printf("\n\n");
  for(j=1;j<=n;++j) 
  {
   if(board[i]==j)
    printf(" Q"); 
   else
    printf(" -"); 
  }
 }
}
int place(int row,int column)
{
 int i;
 for(i=1;i<=row-1;++i)
 {
  if(board[i]==column)
   return 0;
  else
   if(abs(board[i]-column)==abs(i-row))
    return 0;
 }
 
 return 1; 
}
void queen(int row,int n)
{
 int column;
 for(column=1;column<=n;++column)
 {
  if(place(row,column))
  {
   board[row]=column; 
   if(row==n) 
    print(n); 
   else
    queen(row+1,n);
  }
 }
}