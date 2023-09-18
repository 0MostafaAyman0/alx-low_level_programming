#include <stdio.h>

/**
 * add - sum
 * @m: num1
 * @n: num2
 *
 * Return: int
 */
int add(int m, int n)
{
	return (m + n);
}

/**
 * sub - difference
 * @m: num1
 * @n: num2
 *
 * Return: int
 */
int sub(int m, int n)
{
	return (m - n);
}

/**
 * mul - product
 * @m: num1
 * @n: num2
 *
 * Return: int
 */
int mul(int m, int n)
{
	return (m * n);
}

/**
 * op_div - division
 * @m: num1
 * @n: num2
 *
 * Return: int
 */
int div(int m, int n)
{
	if (n == 0){
	printf ("error or zerooo\n");
		return (0);
	}
	return (m / n);
}

/**
 * mod - remainder of the division
 * @m: num1
 * @n: num2
 *
 * Return: int
 */
int mod(int m, int n)
{
	if (n == 0) {
		printf ("y 3am 2olna erroorr\n");
		return (0);
	}
	return (m % n);
}
