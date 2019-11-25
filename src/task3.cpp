#include "task2.h"
unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long sum=0;
	unsigned int j=2;

	while(j<hbound)
	{
		if (checkPrime(unsigned int (j)))
			sum = sum+j;
		j++;
	}
	return sum;
}