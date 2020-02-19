#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
	//Write your code here.
	int a, b, resA = 0, resO = 0, resX = 0, an, or, xor;
	for (a = 1; a != n + 1; a++)
	{
		for (b = a + 1; b != n + 1; b++)
		{
			an = a & b;
			or = a | b;
			xor = a ^ b;
			printf("AQUI:%i AND %i = %i; %i\n", a, b, an, resA);
			if (an > resA && an < k)
				resA = an;
			if (or > resO && or < k)
				resO = or;
			if (xor > resX && xor < k)
				resX = xor;
		}

	}
	printf("%i\n", resA);
	printf("%i\n", resO);
	printf("%i\n", resX);
}

int main() {
	int n, k;

	scanf("%d %d", &n, &k);
	calculate_the_maximum(n, k);

	return 0;
}
