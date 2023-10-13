#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0) return (0);

	va_list args;
	va_start(args, n);
	int sum = 0;

	for(int i = 0 ; i < n ; i++)
	{
		int number = va_arg(args, int);
		sum += number;
	}

	return (sum);
}
