#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(char* left, char* right) { 
  char temp = *left; 
  *left = *right; 
  *right = temp; 
} 
int compare (const void * a, const void * b)
{
  return ( *(char*)a - *(char*)b ); 
} 
void PrintSortedPermutations(char* inStr) 
{
  int strSize = strlen(inStr); 
  qsort(inStr, strSize, sizeof(char), compare); 
  int largerPermFound = 1; 
  do{
    printf("%s ", inStr); 
    int i; 
    for (i = strSize - 2; i >= 0 && inStr[i] >= inStr[i+1]; --i){} 
    if (i > -1) 
    {
      int j = i+1; 
      int k; 
      for(k=j;k<strSize && inStr[k];++k) 
      {
        if (inStr[k] > inStr[i] && inStr[k] < inStr[j]) j = k;
      }
      swap(&inStr[i], &inStr[j]); 
      qsort(inStr+i+1, strSize-i-1, sizeof(char), compare);
    } 
    else 
    { 
      largerPermFound = 0; 
    }
  }
  while(largerPermFound);
} 
int main(void) 
{ int p,q; 
 scanf("%d", &p); 
 for(q=1;q<=p;q++) 
 { 
   char str[1000]; 
   scanf("%s\n", str); 
   PrintSortedPermutations(str);
   printf("\n");
 }
 return 0;
}
