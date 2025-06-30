#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define LIMIT 400000

int eratos[LIMIT];

int is_prime(int n)
{
	int det = sqrt(n);
	int i = 2;

	while (i <= det)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{   
	for (int i = 2; i <= LIMIT; i++)
		eratos[i] = 1;

	for (int i = 2; i * i <= LIMIT; i++)
	{
		if (eratos[i])
		{
			for (int j = i * i; j <= LIMIT; j += i)
				eratos[j] = 0;
		}
	}

	int count_prime = 0;
	
	for (int i = 2; i <= LIMIT; i++)
	{
		if (eratos[i])
			count_prime += 1;
	}
	
	int *prime = calloc(sizeof(int), count_prime + 1);
	int index_prime = 1;

	for (int i = 2; i <= LIMIT; i++)
	{
		if (eratos[i])
		{
			prime[index_prime] = i;
			index_prime += 1;
		}
	}

	int *super_prime = calloc(sizeof(int), index_prime + 1);
	int index_super = 1;

	for (int i = 2; i < index_prime; i++)
	{
		if (is_prime(i))
		{
			super_prime[index_super] = prime[i];
			index_super += 1;
		}
	}

	int t;

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		printf("%d\n", super_prime[n]);
	}
	return (0);
}