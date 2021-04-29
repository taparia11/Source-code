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
}*/
#include <bits/stdc++.h>
using namespace std;

// Function to return the number of unique triangles
int UniqueTriangles(int a[], int b[], int c[], int n)
{
	vector<int> sides[n];

	// Map to store the frequency of triangles
	// with same sides
	map<vector<int>, int> m;

	for (int i = 0; i < n; i++) {

		// Push all the sides of the current triangle
		sides[i].push_back(a[i]);
		sides[i].push_back(b[i]);
		sides[i].push_back(c[i]);

		// Sort the three sides
		sort(sides[i].begin(), sides[i].end());

		// Store the frequency of the sides
		// of the triangle
		m[sides[i]] = m[sides[i]] + 1;
	}

	map<vector<int>, int>::iterator i;

	// To store the count of unique triangles
	int count = 0;
	for (i = m.begin(); i != m.end(); i++) {

		// If current triangle has unique sides
		if (i->second == 1)
			count++;
	}

	return count;
}

// Driver code
int main()
{
  int pp,i;int a[10];
	int b[10]; 
	int c[10];
  scanf("%d",&pp);
  for(i=0;i<pp;i++)
  {
    cin>>a[i]>>b[i]>>c[i];
  }


	cout << UniqueTriangles(a, b, c, pp);

	return 0;
}