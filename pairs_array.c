#include <stdio.h>
int sockMerchant(int* ar)
{
	int i, j, c;
	c = 0;
	for (i = 0; i != 9; i++)
		if (ar[i] == 0)
			c++;
	c = c /2;
	printf("Contador: %i\n", c);

	for (i = 0; i != 9; i++)
	{
	Here:
		printf("Arreglo[%i]: %i\n", i, ar[i]);
		if(ar[i] != 0)
		{
			for(j = i + 1; j != 9; j++)
			{
				printf("%i compare %i\n", ar[i], ar[j]);
				if (ar[i] == ar[j])
				{
					c++;
					printf("Contador: %i\n", c);
					ar[i] = 0;
					ar[j] = 0;
					goto Here;
				}
			}
		}
	}
	return(c);


}
int main (void)
{
	int ar[9] = {10, 20, 20, 10, 10, 30, 50, 10, 20};
	int a;
	a = sockMerchant(ar);
	printf("%i\n", a);
	return (0);
}
