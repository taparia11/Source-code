#include <stdio.h>
struct player 
{
int t,n,num,small,dif;
};
int main (void)
{
    struct player fitness;
	int i;
	scanf("%d", &fitness.t);
	for (i = 0; i < fitness.t; i++)
	{
		scanf("%d", &fitness.n);
		fitness.small = 1000005, fitness.dif = 0;

		while (fitness.n--)
		{
			scanf("%d", &fitness.num);
			if (fitness.num - fitness.small > fitness.dif)
				fitness.dif = fitness.num - fitness.small;
			if (fitness.small > fitness.num)
				fitness.small = fitness.num;
		}
		if (fitness.dif > 0)
			printf("%d\n", fitness.dif);
		else
			printf("UNFIT\n");
		fitness.dif = 0;
	}

	return 0;
}