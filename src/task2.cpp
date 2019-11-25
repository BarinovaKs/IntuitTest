#include <math.h>
bool checkPrime(unsigned int value) //проверка числа на простоту
{
	bool res = false;
	int i, m = 0;
	i = sqrt(value);
	while (i > 1)
	{
		if (value % i == 0 && i!=1)
			m++;
		i--;
	}
	if (m == 0 && value!=1)
		res= true;
	
	return res;
}

unsigned long long nPrime(unsigned n) // нахождение n - ого простого числа(в ряду)
{
	int a, i=1, m=0, z, k=0;
	// a - делитель проверяемого числа
	// i - проверяемое число 
	// m - счетчик делителей, если m =0, то чило простое
	// z - переменная, которой передают текущее знаяение простого числа
	// k - счетчик последовательности ряда простых чисел
	k = n;
	while (k>0)
	{
		a = i / 2;
		m = 0;
		while (a>0)
		{
			if (i%a == 0 && a!= 1)
				m++;
			a--;
		}
		if (m == 0 && i!=1)
		{
			z = i;
			k--;
		}
		i++;
	}
	
	return z;
}

unsigned long long nextPrime(unsigned long long value)
{
	unsigned long long i, a;
	int m = 0, z = 0;
	i = value+1;

	while (z<1)
	{
		
		a = i / 2;
		while (a > 0)
		{
			if (i%a == 0 && a != 1)
				m++;
	
			a--;
		}
		if (m == 0 && i !=1)
			{
				z++;
				break;
		}
		m = 0;
		i++;
	}

	return i;
}