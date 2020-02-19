#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	float px = 7, py = 8, qx = 9, qy = 1, aux;
	float m, b = 0;
	float rx, ry;
	b = py;
	aux = m*px;
	printf("%f\n", aux);
	px = (float)px;
	py = (float)py;
	m = (qy - py)/(qx -px);
	aux = m*px;
	b = py - aux;
	printf("aux: %f\n bx: %f", aux, b);
	printf("b = %f - %f*%f: %f\n", py, m, px, b);
	b = qy - (m *qx);
	rx = (2 *qx) - px;
	ry = (m * rx) + b;
	rx = (int)rx;
	ry = (int)ry;
	printf("m: %f\n", m);
	printf("b: %f\n", b);
	printf("%f %f \n", rx, ry);
	return 0;
}
