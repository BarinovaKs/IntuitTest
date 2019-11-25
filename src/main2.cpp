#include <stdio.h>
#include "task2.h"
int main()
{
	unsigned int a;
	unsigned b;
	unsigned long long c;

	scanf_s("%d", &a);
	if (checkPrime(unsigned int (a)))
		printf("Chislo PROSTOE\n");
	else printf("Chislo NE prostoe\n");

	scanf_s("%d", &b);
	printf("PROSTOE V RIADU= %d\n", nPrime(unsigned (b)));

	scanf_s("%lld", &c);
	printf("Blizhayshee k %lld = ", c);
	printf("%lld \n", nextPrime(unsigned long long (c))); 

	int q=getchar();
	q= getchar();
	return 0;
}