#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int t;
	scanf("%d",&t);
	for(int a0 = 0; a0 < t; a0++)
	{
		long n;
		scanf("%ld",&n);
		long int l[8] = {2, 3, 5, 7, 11, 13, 17, 19};
		long int primo = 1, i, ar = 1, n1 = 0;

		n1 = n;
		for (i = 0; i < n; i++)
		{
			if (n == 1)
				break;
			if (n % l[ar] == 0)
			{
				n = n / l[ar];
				if (l[ar] > primo)
					primo = l[ar];
			}
			else
			{
				if(l[ar] == 19)
				{
					primo = n1;
					break;
				}
				ar++;
			}
		}
		printf("%ld\n", primo);

	}
	return(0);
}
