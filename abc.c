#include <stdio.h>
struct banknotes
{
  int n,x,notes[100];
};
int main(void) {
  struct banknotes check;
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
	    int s=0;
	    scanf("%d %d",&check.n,&check.x);
	    for(i=0;i<check.n;i++)
	    {
	        scanf("%d",&check.notes[i]);
	    }
	    int m=0;
	   // for(i=0;i<check.n;i++)
	    {
	        s=s+check.notes[i];
	    }
	    if(s%check.x == 0)
	    {
	    printf("%d\n",s/check.x);
	    }
	    else
	    {
	        for(i=0;i<check.n;i++)
	        {
	            if(check.notes[i] <= s%check.x)
	            m=1;
	        }
	        if(m==1)
	        {
	            printf("-1\n");
	        }
	        else
	        {
	            printf("%d\n",s/check.x);
	        }
	    }
	}
	return 0;
}