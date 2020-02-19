#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int c, char *v[])
{
	(void)c;
	int i, j, in, l, flag = 0, s, s1 = 0, con, con1;

	in = atoi(v[1]);
	l = (in * 2) - 1;
	con = in;
	con1 = con;
	s = l;
	if (in == 1)
	{
		printf("1\n");
		return (0);
	}
	for (i = 1; i <= l; i++)
	{
		for(j = 1; j <= s1; j++)
		{
			printf("%i ", con1);
			con1--;
		}
		for (j = 1; j <= s; j++)
		{
			printf("%i ", con);
		}
		for(j = 1; j <= s1; j++)
		{
			con1++;
			printf("%i ", con1);
		}
		printf("\n");
		if (s == 1)
			flag = 1;
		if (flag == 0)
		{
			con--;
			s -= 2;
			s1++;
		}
		else
		{
			con++;
			s += 2;
			s1--;
		}
	}
	return (0);
}
