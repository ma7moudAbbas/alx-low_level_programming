#include "main.h"
/**
 * swap_int - swaps the values of two integers. 
 * @a: interger to swap 
 * @b: interger to swap 
 *
 * Return: returns nothing on sucess
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
