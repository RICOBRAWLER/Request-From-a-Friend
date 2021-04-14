#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>


int idx = 0;


void Recursive(long double a, long int n, long double ra, long double prev)
{
	printf("%Lf의 %Lf제곱 = %Lf", ra, prev, a);
	if (idx % 2 != 0)
		printf("\n");
	else
		printf(" / ");

	idx++;

	if (idx == n)
		return;

	Recursive(pow(ra, a), n, ra, a);
}


int main()
{
	long double prev = 1;
	long double a, ra;
	long int n;
	scanf("%Lf %ld", &a, &n);

	ra = a;

	Recursive(a, n, ra, prev);
}

